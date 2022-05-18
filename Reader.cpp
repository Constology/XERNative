#include "Reader.h"

#include <cassert>

#define MAX_HEADER_LEN 255 // TODO: Count the real maximum (255 is not the real value)

const std::string WHITESPACE = " \n\r\t\f\v";

std::string ltrim(const std::string &s) {
    size_t start = s.find_first_not_of(WHITESPACE);
    return (start == std::string::npos) ? "" : s.substr(start);
}

std::string rtrim(const std::string &s) {
    size_t end = s.find_last_not_of(WHITESPACE);
    return (end == std::string::npos) ? "" : s.substr(0, end + 1);
}

std::string trim(const std::string &s) { return rtrim(ltrim(s)); }

void Reader::split(std::vector<std::string> &strings, const std::string &str) {
    int currIndex = 0, i = 0;
    int startIndex = 0, endIndex;
    trim(str);
    bool doNotBreak = false;
    while (i <= str.length()) {
        if (str[i] == '\"') {
            if (doNotBreak)
                doNotBreak = false;
            else
                doNotBreak = true;
        }
        if (doNotBreak == false) {
            if (str[i] == '\t' || i == str.length()) {
                endIndex = i;
                std::string subStr;

                subStr.append(str, startIndex, endIndex - startIndex);
                // cout << subStr << endl;
                strings.emplace_back(subStr);
                currIndex++;
                startIndex = endIndex + 1;
            }
        }
        i++;
    }
}

int i = 0;

int Reader::parse(const std::string &filename) {

    std::ifstream fin(filename);
    if (fin.is_open()) {
        std::string line;
        std::string current_table;
        std::vector<std::string> current_header;
        std::vector<std::string> current_record;

        while (getline(fin, line)) {
            current_record.clear();
            // Split line into tab-separated parts
            std::vector<std::string> parts;

            split(parts, line);
            // check if line starts with %T then it's a table
            if (parts.at(0) == "%T") {
                current_table = parts.at(1);
                current_table = trim(current_table);
                current_header.clear();
            }
            // check if line starts with %F then it's a header
            else if (parts.at(0) == "%F") {
                for (int i = 0; i < parts.size() - 1; i++) {
                    if (parts.at(i + 1).empty())
                        break;
                    std::string chpart = parts.at(i + 1);
                    chpart = trim(chpart);
                    current_header.emplace_back(chpart);
                }
            }
            // check if line starts with %R then it is a record that could be parsed to the class
            // matching the table name
            else if (parts.at(0) == "%R") {
                for (int i = 0; i < parts.size() - 1; i++) {
                    if (current_header.at(i).empty())
                        break;
                    std::string crpart = parts.at(i + 1);
                    crpart = trim(crpart);
                    current_record.emplace_back(crpart);
                }
                add(current_table, current_header, current_record);
            }
        }
        fin.close();
    } else {
        std::cout << "Unable to open" << std::endl;
    }
    return 0;
}

void Reader::add(std::string &table,
                 std::vector<std::string> header,
                 std::vector<std::string> record) {
    // assert(not(table.empty() || header == nullptr || record == nullptr));

    if (table == "ACCOUNT") {
        Account account(header, record, this);
        accounts.add(account);
    } else if (table == "ACTVCODE") {
        Actvcode actvcode(header, record, this);
        actvcodes.add(actvcode);
    } else if (table == "ACTVTYPE") {
        Actvtype actvtype(header, record, this);
        actvtypes.add(actvtype);
    } else if (table == "CALENDAR") {
        Calendar calendar(header, record, this);
        calendars.add(calendar);
    } else if (table == "PROJWBS") {
        Wbs wbs(header, record, this);
        wbss.add(wbs);
    } else if (table == "UDFVALUE") {
        Udf udf(header, record, this);
        udfs.add(udf);
    } else if (table == "UDFTYPE") {
        UDFType udftype(header, record, this);
        udftypes.add(udftype);
    } else if (table == "ROLE") {
        Role role(header, record, this);
        roles.add(role);
    } else if (table == "CURRTYPE") {
        Currtype currtype(header, record, this);
        currtypes.add(currtype);
    } else if (table == "RCATTYPE") {
        RCatType rcattype(header, record, this);
        rCatTypes.add(rcattype);
    } else if (table == "RCATVAL") {
        RCatValue rcatval(header, record, this);
        rCatValues.add(rcatval);
    } else if (table == "ROLERATE") {
        RoleRate rolerate(header, record, this);
        roleRates.add(rolerate);
    } else if (table == "TASKRSRC") {
        TaskRsrc taskrsrc(header, record, this);
        taskRsrcs.add(taskrsrc);
    } else if (table == "OBS") {
        Obs obs(header, record, this);
        obss.add(obs);
    } else if (table == "NONWORK") {
        NonWork nonwork(header, record, this);
        nonWorks.add(nonwork);
    } else if (table == "FINTMPL") {
        Fintmpl fintmpl(header, record, this);
        fintmpls.add(fintmpl);
    } else if (table == "PCATTYPE") {
        Pcattype pcattype(header, record, this);
        pcattypes.add(pcattype);
    } else if (table == "PCATVAL") {
        Pcatval pcatval(header, record, this);
        pcatvals.add(pcatval);
    } else if (table == "TASKPRED") {
        Taskpred taskpred(header, record, this);
        taskpreds.add(taskpred);
    } else if (table == "PROJPCAT") {
        Projpcat projpcat(header, record, this);
        projpcats.add(projpcat);
    } else if (table == "PROJECT") {
        Project project(header, record, this);
        projects.add(project);
    } else if (table == "RSRC") {
        Rsrc rsrc(header, record, this);
        rsrcs.add(rsrc);
    } else if (table == "RSRCRCAT") {
        Rsrcrcat rsrccat(header, record, this);
        rsrcrcats.add(rsrccat);
    } else if (table == "RSRCCURVDATA") {
        Rsrccurvdata rsrccurve(header, record, this);
        rsrccurvdatas.add(rsrccurve);
    } else if (table == "RSRCRATE") {
        Rsrcrate rsrcrate(header, record, this);
        rsrcrates.add(rsrcrate);
    } else if (table == "SCHEDOPTION") {
        Schedoption schedoptin(header, record, this);
        schedoptions.add(schedoptin);
    } else if (table == "TASKACTV") {
        Taskactv taskactv(header, record, this);
        taskactvs.add(taskactv);
    } else if (table == "TASKPROC") {
        Taskproc taskproc(header, record, this);
        taskprocs.add(taskproc);
    } else if (table == "TASK") {
        // std::cout << "***********************************" << std::endl;
        // std::cout << tasks.getAll().size() << "\t" << header.size() << "\t" << record.size()
        //           << std::endl;
        // for (int i = 0; i < header.size(); i++) {
        //     std::cout << header.at(i) << "\t" << record.at(i) << std::endl;
        // }
        Task task(header, record, this);
        tasks.add(task);
        // std::cout << task.get_tsv() << std::endl;
        // i++;
    }
}