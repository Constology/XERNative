
#ifndef XERPARSER_SCHEDOPTION_H
#define XERPARSER_SCHEDOPTION_H

#include <iostream>
#include <vector>
#include <string>

class Reader;

class Schedoption
{
public:
	int getSchedoptionsId();
	void setSchedoptionsId(int value);
	int getProjId();
	void setProjId(int value);
	std::string getSchedOuterDependType();
	void setSchedOuterDependType(std::string value);
	std::string getSchedOpenCriticalFlag();
	void setSchedOpenCriticalFlag(std::string value);
	std::string getSchedLagEarlyStartFlag();
	void setSchedLagEarlyStartFlag(std::string value);
	std::string getSchedRetainedLogic();
	void setSchedRetainedLogic(std::string value);
	std::string getSchedSetplantoforecast();
	void setSchedSetplantoforecast(std::string value);
	std::string getSchedFloatType();
	void setSchedFloatType(std::string value);
	std::string getSchedCalendarOnRelationshipLag();
	void setSchedCalendarOnRelationshipLag(std::string value);
	std::string getSchedUseExpectEndFlag();
	void setSchedUseExpectEndFlag(std::string value);
	std::string getSchedProgressOverride();
	void setSchedProgressOverride(std::string value);
	std::string getLevelFloatHrsCnt();
	void setLevelFloatHrsCnt(std::string value);
	std::string getLevelOuterAssignFlag();
	void setLevelOuterAssignFlag(std::string value);
	std::string getLevelOuterAssignPriority();
	void setLevelOuterAssignPriority(std::string value);
	std::string getLevelOverAllocPct();
	void setLevelOverAllocPct(std::string value);
	std::string getLevelWithinFloatFlag();
	void setLevelWithinFloatFlag(std::string value);
	std::string getLevelKeepSchedDateFlag();
	void setLevelKeepSchedDateFlag(std::string value);
	std::string getLevelAllRsrcFlag();
	void setLevelAllRsrcFlag(std::string value);
	std::string getSchedUseProjectEndDateForFloat();
	void setSchedUseProjectEndDateForFloat(std::string value);
	std::string getEnableMultipleLongestPathCalc();
	void setEnableMultipleLongestPathCalc(std::string value);
	std::string getLimitMultipleLongestPathCalc();
	void setLimitMultipleLongestPathCalc(std::string value);
	std::string getMaxMultipleLongestPath();
	void setMaxMultipleLongestPath(std::string value);
	std::string getUseTotalFloatMultipleLongestPaths();
	void setUseTotalFloatMultipleLongestPaths(std::string value);
	std::string getKeyActivityForMultipleLongestPaths();
	void setKeyActivityForMultipleLongestPaths(std::string value);
	std::string getLevelprioritylist();
	void setLevelprioritylist(std::string value);

	std::string get_tsv();

	Schedoption(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	int schedoptions_id;
	int proj_id;
	std::string sched_outer_depend_type;
	std::string sched_open_critical_flag;
	std::string sched_lag_early_start_flag;
	std::string sched_retained_logic;
	std::string sched_setplantoforecast;
	std::string sched_float_type;
	std::string sched_calendar_on_relationship_lag;
	std::string sched_use_expect_end_flag;
	std::string sched_progress_override;
	std::string level_float_hrs_cnt;
	std::string level_outer_assign_flag;
	std::string level_outer_assign_priority;
	std::string level_over_alloc_pct;
	std::string level_within_float_flag;
	std::string level_keep_sched_date_flag;
	std::string level_all_rsrc_flag;
	std::string sched_use_project_end_date_for_float;
	std::string enable_multiple_longest_path_calc;
	std::string limit_multiple_longest_path_calc;
	std::string max_multiple_longest_path;
	std::string use_total_float_multiple_longest_paths;
	std::string key_activity_for_multiple_longest_paths;
	std::string LevelPriorityList;

	Reader *reader;
	void update_tsv();
	std::string tsv;
	std::string schedoptions_id_str;
	std::string proj_id_str;
};

#endif // XERPARSER_SCHEDOPTION_H
