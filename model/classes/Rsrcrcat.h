
#ifndef XERPARSER_RSRCRCAT_H
#define XERPARSER_RSRCRCAT_H

#include <iostream>
#include <vector>
#include <string>

class Reader;

class Rsrcrcat
{
public:
	int rsrc_id;
	int rsrc_catg_type_id;
	int rsrc_catg_id;

	std::string tsv;

	Rsrcrcat(const std::vector<std::string> header, const std::vector<std::string> params, Reader *readerObj);

private:
	void update_tsv();
	Reader *reader;
	std::string rsrc_id_str;
	std::string rsrc_catg_type_id_str;
	std::string rsrc_catg_id_str;
};

#endif // XERPARSER_RSRCRCAT_H
