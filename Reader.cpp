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
    while (i <= str.length()) {
        if (str[i] == '\t' || i == str.length()) {
            endIndex = i;
            std::string subStr;
            subStr.append(str, startIndex, endIndex - startIndex);
            strings.emplace_back(subStr);
            currIndex++;
            startIndex = endIndex + 1;
        }
        i++;
    }
}

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
                    current_header.emplace_back(parts.at(i + 1));
                }
            }
            // check if line starts with %R then it is a record that could be parsed to the class
            // matching the table name
            else if (parts.at(0) == "%R") {
                for (int i = 0; i < parts.size() - 1; i++) {
                    if (current_header.at(i).empty())
                        break;
                    current_record.emplace_back(parts.at(i + 1));
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

void Reader::add(const std::string &table,
                 const std::vector<std::string> header,
                 const std::vector<std::string> record) {
    // assert(not(table.empty() || header == nullptr || record == nullptr));

    if (table == "ACCOUNT") {
        accounts.add(Account(header, record));
    } else if (table == "ACTVCODE") {
        actvcodes.add(Actvcode(header, record));
    } else if (table == "ACTVTYPE") {
        actvtypes.add(Actvtype(header, record));
    } else if (table == "CALENDAR") {
        calendars.add(Calendar(header, record));
    } else if (table == "PROJWBS") {
        wbss.add(Wbs(header, record, this));
    } else if (table == "UDFVALUE") {
        udfs.add(Udf(header, record));
    } else if (table == "UDFTYPE") {
        udftypes.add(UDFType(header, record, this));
    } else if (table == "ROLE") {
        roles.add(Role(header, record, this));
    } else if (table == "CURRTYPE") {
        currencies.add(Currtype(header, record));
    } else if (table == "RCATTYPE") {
        rCatTypes.add(RCatType(header, record));
    } else if (table == "RCATVAL") {
        rCatValues.add(RCatValue(header, record));
    } else if (table == "ROLERATE") {
        roleRates.add(RoleRate(header, record));
    } else if (table == "TASKRSRC") {
        taskRsrcs.add(TaskRsrc(header, record));
    } else if (table == "OBS") {
        obss.add(Obs(header, record));
    } else if (table == "NONWORK") {
        nonWorks.add(NonWork(header, record));
    } else if (table == "FINTMPL") {
        fintmpls.add(Fintmpl(header, record));
    } else if (table == "PCATTYPE") {
        pcattypes.add(Pcattype(header, record, this));
    } else if (table == "PCATVAL") {
        pcatvals.add(Pcatval(header, record, this));
    } else if (table == "TASKPRED") {
        taskpreds.add(Taskpred(header, record));
    } else if (table == "PROJPCAT") {
        projpcats.add(Projpcat(header, record, this));
    } else if (table == "PROJECT") {
        projects.add(Project(header, record, this));
    } else if (table == "RSRC") {
        rsrcs.add(Rsrc(header, record, this));
    } else if (table == "RSRCRCAT") {
        rsrcrcats.add(Rsrcrcat(header, record));
    } else if (table == "RSRCCURVDATA") {
        rsrccurvdatas.add(Rsrccurvdata(header, record));
    } else if (table == "RSRCRATE") {
        rsrcrates.add(Rsrcrate(header, record));
    } else if (table == "SCHEDOPTION") {
        schedoptions.add(Schedoption(header, record));
    } else if (table == "TASKACTV") {
        taskactvs.add(Taskactv(header, record));
    } else if (table == "TASKPROC") {
        taskprocs.add(Taskproc(header, record));
    } else if (table == "TASK") {
        tasks.add(Task(header, record));
    }
}