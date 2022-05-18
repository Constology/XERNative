
#include "Rsrccurvdata.h"
#include "../../Reader.h"

Rsrccurvdata::Rsrccurvdata(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj)
{
	reader = readerObj;
	tsv = "";
	for (int i = 0; i < params.size(); i++)
	{
		if (header.at(i) == "curv_id")
		{
			if (!params.at(i).empty())
			{
				curv_id = stoi(params.at(i));
				curv_id_str = params.at(i);
			}
		}
		else if (header.at(i) == "curv_name")
		{
			curv_name = params.at(i);
		}
		else if (header.at(i) == "default_flag")
		{
			default_flag = params.at(i);
		}
		else if (header.at(i) == "pct_usage_0")
		{
			pct_usage_0 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_1")
		{
			pct_usage_1 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_2")
		{
			pct_usage_2 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_3")
		{
			pct_usage_3 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_4")
		{
			pct_usage_4 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_5")
		{
			pct_usage_5 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_6")
		{
			pct_usage_6 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_7")
		{
			pct_usage_7 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_8	")
		{
			pct_usage_8 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_9")
		{
			pct_usage_9 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_10")
		{
			pct_usage_10 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_11")
		{
			pct_usage_11 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_12")
		{
			pct_usage_12 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_13")
		{
			pct_usage_13 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_14")
		{
			pct_usage_14 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_15")
		{
			pct_usage_15 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_16")
		{
			pct_usage_16 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_17")
		{
			pct_usage_17 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_18")
		{
			pct_usage_18 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_19")
		{
			pct_usage_19 = params.at(i);
		}
		else if (header.at(i) == "pct_usage_20")
		{
			pct_usage_20 = params.at(i);
		}
	}
	update_tsv();
}

void Rsrccurvdata::update_tsv()
{
	tsv = "%R\t";
	tsv.append(std::to_string(curv_id)).append("\t").append(curv_name).append("\t").append(default_flag).append("\t").append(pct_usage_0).append("\t").append(pct_usage_1).append("\t").append(pct_usage_2).append("\t").append(pct_usage_3).append("\t").append(pct_usage_4).append("\t").append(pct_usage_5).append("\t").append(pct_usage_6).append("\t").append(pct_usage_7).append("\t").append(pct_usage_8).append("\t").append(pct_usage_9).append("\t").append(pct_usage_10).append("\t").append(pct_usage_11).append("\t").append(pct_usage_12).append("\t").append(pct_usage_13).append("\t").append(pct_usage_14).append("\t").append(pct_usage_15).append("\t").append(pct_usage_16).append("\t").append(pct_usage_17).append("\t").append(pct_usage_18).append("\t").append(pct_usage_19).append("\t").append(pct_usage_20).append("\n");
}

std::string Rsrccurvdata::get_tsv()
{
	update_tsv();
	return tsv;
}

int Rsrccurvdata::getCurvId() { return curv_id; }
void Rsrccurvdata::setCurvId(int value)
{
	if (value > 0)
	{
		curv_id = value;
		curv_id_str = std::to_string(value);
	}
}
std::string Rsrccurvdata::getCurvName() { return curv_name; }
void Rsrccurvdata::setCurvName(std::string value)
{
	if (!value.empty())
	{
		curv_name = value;
	}
}
std::string Rsrccurvdata::getDefaultFlag() { return default_flag; }
void Rsrccurvdata::setDefaultFlag(std::string value)
{
	if (!value.empty())
	{
		default_flag = value;
	}
}
std::string Rsrccurvdata::getPctUsage0() { return pct_usage_0; }
void Rsrccurvdata::setPctUsage0(std::string value)
{
	if (!value.empty())
	{
		pct_usage_0 = value;
	}
}
std::string Rsrccurvdata::getPctUsage1() { return pct_usage_1; }
void Rsrccurvdata::setPctUsage1(std::string value)
{
	if (!value.empty())
	{
		pct_usage_1 = value;
	}
}
std::string Rsrccurvdata::getPctUsage2() { return pct_usage_2; }
void Rsrccurvdata::setPctUsage2(std::string value)
{
	if (!value.empty())
	{
		pct_usage_2 = value;
	}
}
std::string Rsrccurvdata::getPctUsage3() { return pct_usage_3; }
void Rsrccurvdata::setPctUsage3(std::string value)
{
	if (!value.empty())
	{
		pct_usage_3 = value;
	}
}
std::string Rsrccurvdata::getPctUsage4() { return pct_usage_4; }
void Rsrccurvdata::setPctUsage4(std::string value)
{
	if (!value.empty())
	{
		pct_usage_4 = value;
	}
}
std::string Rsrccurvdata::getPctUsage5() { return pct_usage_5; }
void Rsrccurvdata::setPctUsage5(std::string value)
{
	if (!value.empty())
	{
		pct_usage_5 = value;
	}
}
std::string Rsrccurvdata::getPctUsage6() { return pct_usage_6; }
void Rsrccurvdata::setPctUsage6(std::string value)
{
	if (!value.empty())
	{
		pct_usage_6 = value;
	}
}
std::string Rsrccurvdata::getPctUsage7() { return pct_usage_7; }
void Rsrccurvdata::setPctUsage7(std::string value)
{
	if (!value.empty())
	{
		pct_usage_7 = value;
	}
}
std::string Rsrccurvdata::getPctUsage8() { return pct_usage_8; }
void Rsrccurvdata::setPctUsage8(std::string value)
{
	if (!value.empty())
	{
		pct_usage_8 = value;
	}
}
std::string Rsrccurvdata::getPctUsage9() { return pct_usage_9; }
void Rsrccurvdata::setPctUsage9(std::string value)
{
	if (!value.empty())
	{
		pct_usage_9 = value;
	}
}
std::string Rsrccurvdata::getPctUsage10() { return pct_usage_10; }
void Rsrccurvdata::setPctUsage10(std::string value)
{
	if (!value.empty())
	{
		pct_usage_10 = value;
	}
}
std::string Rsrccurvdata::getPctUsage11() { return pct_usage_11; }
void Rsrccurvdata::setPctUsage11(std::string value)
{
	if (!value.empty())
	{
		pct_usage_11 = value;
	}
}
std::string Rsrccurvdata::getPctUsage12() { return pct_usage_12; }
void Rsrccurvdata::setPctUsage12(std::string value)
{
	if (!value.empty())
	{
		pct_usage_12 = value;
	}
}
std::string Rsrccurvdata::getPctUsage13() { return pct_usage_13; }
void Rsrccurvdata::setPctUsage13(std::string value)
{
	if (!value.empty())
	{
		pct_usage_13 = value;
	}
}
std::string Rsrccurvdata::getPctUsage14() { return pct_usage_14; }
void Rsrccurvdata::setPctUsage14(std::string value)
{
	if (!value.empty())
	{
		pct_usage_14 = value;
	}
}
std::string Rsrccurvdata::getPctUsage15() { return pct_usage_15; }
void Rsrccurvdata::setPctUsage15(std::string value)
{
	if (!value.empty())
	{
		pct_usage_15 = value;
	}
}
std::string Rsrccurvdata::getPctUsage16() { return pct_usage_16; }
void Rsrccurvdata::setPctUsage16(std::string value)
{
	if (!value.empty())
	{
		pct_usage_16 = value;
	}
}
std::string Rsrccurvdata::getPctUsage17() { return pct_usage_17; }
void Rsrccurvdata::setPctUsage17(std::string value)
{
	if (!value.empty())
	{
		pct_usage_17 = value;
	}
}
std::string Rsrccurvdata::getPctUsage18() { return pct_usage_18; }
void Rsrccurvdata::setPctUsage18(std::string value)
{
	if (!value.empty())
	{
		pct_usage_18 = value;
	}
}
std::string Rsrccurvdata::getPctUsage19() { return pct_usage_19; }
void Rsrccurvdata::setPctUsage19(std::string value)
{
	if (!value.empty())
	{
		pct_usage_19 = value;
	}
}
std::string Rsrccurvdata::getPctUsage20() { return pct_usage_20; }
void Rsrccurvdata::setPctUsage20(std::string value)
{
	if (!value.empty())
	{
		pct_usage_20 = value;
	}
}
