#pragma once
#include "conexion.h"
#include "uso_teclado.h"

void datos_db() {
	con->setSchema("yoga_");

	//select  
	DB = con->prepareStatement("SELECT * FROM yoha_spa;");
	result = DB->executeQuery();

	while (result->next()) {
		printf("Cliente con turnos: = (%d, %s, %s, %d, %d, %s, %d)\n", result->getInt(1), result->getString(2).c_str(), result->getString(3).c_str(), result->getInt(4), result->getInt(5), result->getString(6).c_str(), result->getInt(7));

	}
	//delete result;
	//delete DB;
	//delete con;
	system("pause");
}
