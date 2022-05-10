//
// Created by Taraxtix on 09/05/2022.
//

#include "Writer.h"

void writeXER(const Reader& reader, const std::string& filename){
	std::ofstream fout(filename);
	if(not fout.is_open()){
		fprintf(stderr,  "Error while opening the file");
		exit(EXIT_FAILURE);
	}
	fout
	<< reader.accounts.get_tsv()
	<< reader.actvcodes.get_tsv()
	<< reader.actvtypes.get_tsv()
	<< reader.calendars.get_tsv()
	<< reader.currencies.get_tsv()
	<< reader.rCatTypes.get_tsv()
	<< reader.rCatValues.get_tsv()
	<< reader.roleRates.get_tsv()
	<< reader.roles.get_tsv()
	<< reader.udfs.get_tsv()
	<< reader.udftypes.get_tsv()
	<< reader.wbss.get_tsv()
	<< reader.taskRsrcs.get_tsv()
	<< reader.obss.get_tsv()
	<< reader.nonWorks.get_tsv();

}