#include "Reader.h"

#include <iostream>

using namespace std;

int main()
{
    Reader reader;

    reader.parse("/workspaces/XERNative/wk2.xer");

    for (auto account : reader.accounts.getAll())
    {
        std::cout << account.get_tsv() << endl;
    }

    cout << "*********** Project and WBS **********************" << endl;

    for (Project prj : reader.projects.getAll())
    {
        std::vector<Wbs> wbss = prj.getWbs();
        cout << "prj " << prj.get_tsv() << endl;
        for (Wbs wbs : wbss)
        {
            cout << "WBS " << wbs.wbs_name << endl;
            vector<Task> tasks = wbs.getTasks();
            for (Task task : wbs.getTasks())
            {

                cout << "\t"
                     << "Task " << task.getTaskCode() << "\t" << task.getTaskName() << "\t"
                     << task.getEarlyStartDate().to_string() << "\t"
                     << task.getEarlyEndDate().to_string() << endl;
            }
        }
        // for (Projpcat pcat : reader.projpcats.getAll())
        // {
        //     cout << "Project code assignment" << pcat.tsv << endl;
        //     cout << "Values" << pcat.getValue().tsv << endl;
        // }
    }

    // cout << "*********** UDF **********************" << endl;

    // for (Udf udf : reader.udfs.getByProject(368))
    // {
    //     cout << udf.get_tsv() << std::endl;
    // }

    // cout << "*********** TEST WBS **********************" << endl;
    // for (Wbs wbs : reader.wbss.getAll())
    // {
    //     cout << wbs.get_tsv() << endl;
    // }
    // cout << "**************** CALENDAR *************************" << endl;
    // for (Calendar cal : reader.calendars.getAll())
    // {
    //     cout << cal.get_tsv() << endl;
    // }

    // cout << "***************** CURRENCIES **********************" << endl;
    // for (Currtype curr : reader.currencies.getAll())
    // {
    //     cout << "Currencies " << curr.get_tsv() << endl;
    // }

    // cout << "***************** Resrouece and Resource Rates **********************" << endl;

    // for (Rsrc rsrc : reader.rsrcs.getAll())
    // {
    //     std::vector<Rsrcrate> rRates = reader.rsrcrates.getByRsrcId(rsrc.rsrc_id);
    //     std::vector<TaskRsrc> trs = reader.taskRsrcs.getByRsrcId(rsrc.rsrc_id);

    //     cout << "Parent " << rsrc.getParent().tsv << endl;
    //     std::vector<Rsrc> childs = rsrc.getChildren();
    //     for (Rsrc par : childs)
    //     {
    //         cout << "Children for rsrc " << to_string(rsrc.rsrc_id) << rsrc.rsrc_name << " is "
    //         << par.tsv;
    //     }

    //     for (Rsrcrate rr : rRates)
    //     {
    //         cout << rr.tsv << endl;
    //     }

    //     cout << "RSRC_ID => Task_ID" << endl;
    //     for (TaskRsrc tr : trs)
    //     {
    //         cout << to_string(tr.rsrc_id) << " => " << to_string(tr.task_id) << endl;
    //     }
    // }
    cout << reader.rCatValues.get_tsv() << endl;
    cout << reader.rsrcs.get_tsv() << endl;
    cout << "************filter by resource*************" << endl;
    vector<Task> tsks = reader.tasks.getByRsrc(10554);
    for (auto &t : tsks)
    {
        cout << t.get_tsv() << endl;
    }
}