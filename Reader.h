#ifndef EXRPARSER_READER_H
#define EXRPARSER_READER_H

#include <fstream>
#include <iostream>
#include <string>

#include "model/Accounts.h"
#include "model/Actvcodes.h"
#include "model/Actvtypes.h"
#include "model/Calendars.h"
#include "model/Wbss.h"
#include "model/classes/Wbs.h"
#include "model/Udfs.h"
#include "model/classes/Udf.h"
#include "model/UDFTypes.h"
#include "model/classes/UDFType.h"
#include "model/Roles.h"
#include "model/classes/Role.h"
#include "model/Currtypes.h"
#include "model/classes/Currtype.h"
#include "model/classes/RCatType.h"
#include "model/RCatTypes.h"

class Reader{
public:
		int parse(const std::string& filename);
		Wbss wbss;
		Udfs udfs;
		UDFTypes udftypes;
		Accounts accounts;
		Actvcodes actvcodes;
		Actvtypes actvtypes;
		Calendars calendars;
		Roles roles;
		Currtypes currencies;
		RCatTypes rCatTypes;

	private:
		
		

		static void split(std::string *strings, const std::string &str);

		void add(const std::string& table, const std::string *header, const std::string *record);
};

#endif //EXRPARSER_READER_H
