#ifndef EXRPARSER_READER_H
#define EXRPARSER_READER_H

#include <fstream>
#include <iostream>
#include <string>

#include "model/Accounts.h"
#include "model/Actvcodes.h"
#include "model/Actvtypes.h"
#include "model/Calendars.h"
#include "model/WBSs.h"
#include "model/classes/wbs.h"
#include "model/UDFValues.h"
#include "model/classes/UDFValue.h"
#include "model/UDFTypes.h"
#include "model/classes/UDFType.h"
#include "model/Roles.h"
#include "model/classes/Role.h"
#include "model/CurrTypes.h"
#include "model/classes/CurrType.h"

class Reader{
public:
		int parse(const std::string& filename);
		WBSs wbss;
		UDFValues udfs;
		UDFTypes udftypes;
		Accounts accounts;
		Actvcodes actvcodes;
		Actvtypes actvtypes;
		Calendars calendars;
		Roles roles;
		CurrTypes currencies;

	private:
		
		

		static void split(std::string *strings, const std::string &str);

		void add(const std::string& table, const std::string *header, const std::string *record);
};

#endif //EXRPARSER_READER_H
