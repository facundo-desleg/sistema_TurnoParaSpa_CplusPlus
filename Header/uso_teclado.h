#pragma once
#include "Admin_asignar_turno.h"
#include "conexion.h"
#include "clientes.h"

string printBuildDateTime() {
	/*cout << __TIMESTAMP__ << endl;*/
	return __TIMESTAMP__;
}

string nombre = "f", apellido = "r", solicitud = "j", mes;
int edad = 0, Datos_r = 0, Tecl_admin = 0, Veri_, veri_Dat_Repe;

int dia, anio = 2021, IDModif = 0;

string name() {
	cout << "Ingrese su nombre: ";
	cin >> nombre;
	return nombre;
}
	
string apell() {
	cout << "Ingrese su apellido: ";
	cin >> apellido;
	return apellido;
}

int edad_() {
	cout << "Ingrese su edad: ";
	cin >> edad;
	return edad;
}

int day() {
	Veri_ = 0;
	cout << "\n";
	cout << "Elija un dia del mes (numero): ";
	cin >> dia;

	con->setSchema("yoga_");

	//select  
	DB = con->prepareStatement("SELECT mes FROM turnos_disponibles WHERE dia = ? AND disponible = 'SI';");
	DB->setInt(1, dia);
	result = DB->executeQuery();
	
	while (result->next()) {
	/*	system("pause");*/
		Veri_++;
		/*cout << Veri_;*/
	}
	//while (result->next()) {
	//	printf("Los turnos: = (%s, %s)\n", "MES:", result->getString(1).c_str());
	//	result_mes = result;
	//}

	//result->getString(1).c_str();
	/*cout << result_mes << endl;*/
	//delete result;
	//delete DB;
	//delete con;
	//system("pause");

	return dia;
}
	
string mes_() {
	cout << "Elija el mes (Letras): ";
	cin >> mes;
	return mes;
}

//int anio_() {
//	cout << "Ingrese el anio: ";
//	cin >> anio;
//	return anio;
//}

int Admin() {
	cout << "Ingrese una opcion: ";
	cin >> Tecl_admin;
	return Tecl_admin;
}

void Sacar_Turno() {
	system("mode con: cols=60 lines=50");

	con->setSchema("yoga_");
	DB = con->prepareStatement("INSERT INTO yoha_spa(nombre, apellido, edad, dia, mes, anio, fecha_solicitud) VALUES(?,?,?,?,?,?,?)");
	DB->setString(1,nombre);
	DB->setString(2,apellido);

	DB->setInt(3, edad);
	DB->setInt(4, dia);

	DB->setString(5, mes);
	DB->setInt(6, anio);
	DB->setString(7, printBuildDateTime());
	DB->execute();
	//cout << "Turno asignado." << endl;

	//delete result;
	//delete DB;
	//delete con;
	//system("pause");
}

void Turno_asignado() {

	con->setSchema("yoga_");

	//update
	DB = con->prepareStatement("UPDATE turnos_disponibles SET disponible = 'NO' WHERE dia = ?");
	DB->setInt(1, dia);
	DB->executeQuery();
	//printf("Turnos asignados.\n");
	//system("pause");
}
void Admin_ModificarTurno() {
	system("mode con: cols=70 lines=70");
	cout << "|_______________________________________________________________|" << endl;
	cout << "|****************   MODIFICAR TURNO ASIGNADO   *****************|" << endl;
	cout << "|****************                                  *************|" << endl;
	cout << "|*************   Ponga el numero de ID del turno  **************|" << endl;
	cout << "|*******************   que deseas modificar.   *****************|" << endl;
	cout << "|***************                                  **************|" << endl;
	cout << "|_______________________________________________________________|" << endl;

	con->setSchema("yoga_");

	//select  
	DB = con->prepareStatement("SELECT * FROM yoha_spa where NOT fecha_solicitud;");
	result = DB->executeQuery();

	cout << "|_______________________________________________________________|" << endl;
	cout << "|****************                                  *************|" << endl;

	while (result->next()) {
		Ver_Cant++;
		printf("Cliente con turnos: = (%s, %d, %s, %s, %d, %d, %s, %d)\n", "ID=", result->getInt(1), result->getString(2).c_str(), result->getString(3).c_str(), result->getInt(4), result->getInt(5), result->getString(6).c_str(), result->getInt(7));
		cout << "|****************                                  *************|" << endl;
	}
	cout << "|_______________________________________________________________|" << endl;

	cout << "Ponga el numero de ID: ";
	cin >> IDModif;

	DB = con->prepareStatement("SELECT * FROM yoha_spa where id = ?;");
	DB->setInt(1, IDModif);
	result = DB->executeQuery();

	cout << "|_______________________________________________________________|" << endl;
	cout << "|****************                                  *************|" << endl;

	while (result->next()) {
		printf("Datos seleccionados: = (%s, %d, %s, %s, %d, %d, %s, %d)\n", "ID=", result->getInt(1), result->getString(2).c_str(), result->getString(3).c_str(), result->getInt(4), result->getInt(5), result->getString(6).c_str(), result->getInt(7));
		cout << "|****************                                  *************|" << endl;
	}

}
void Admin_EliminarTurno() {
	system("mode con: cols=70 lines=70");
	cout << "|_______________________________________________________________|" << endl;
	cout << "|*****************   ELIMINAR TURNO ASIGNADO   *****************|" << endl;
	cout << "|****************                                  *************|" << endl;
	cout << "|*************   Ponga el numero de ID del turno  **************|" << endl;
	cout << "|*******************   que deseas eliminar.   ******************|" << endl;
	cout << "|***************                                  **************|" << endl;
	cout << "|_______________________________________________________________|" << endl;

	con->setSchema("yoga_");

	//select  
	DB = con->prepareStatement("SELECT * FROM yoha_spa where NOT fecha_solicitud;");
	result = DB->executeQuery();

	cout << "|_______________________________________________________________|" << endl;
	cout << "|****************                                  *************|" << endl;

	while (result->next()) {
		Ver_Cant++;
		printf("Cliente con turnos: = (%s, %d, %s, %s, %d, %d, %s, %d)\n", "ID=", result->getInt(1), result->getString(2).c_str(), result->getString(3).c_str(), result->getInt(4), result->getInt(5), result->getString(6).c_str(), result->getInt(7));
		cout << "|****************                                  *************|" << endl;
	}
	cout << "|_______________________________________________________________|" << endl;

	cout << "Ponga el numero de ID: ";
	cin >> IDModif;

	con->setSchema("yoga_");
	DB = con->prepareStatement("DELETE FROM yoha_spa WHERE id = ?;");
	DB->setInt(1, IDModif);
	result = DB->executeQuery();

}
void Modificar_Turno() {
	system("mode con: cols=60 lines=50");

	con->setSchema("yoga_");
	DB = con->prepareStatement("UPDATE yoha_spa SET nombre = ?, apellido = ?, edad = ?, dia = ?, mes = ?, anio = ?, fecha_solicitud = ? WHERE id = ?");
	DB->setString(1, nombre);
	DB->setString(2, apellido);

	DB->setInt(3, edad);
	DB->setInt(4, dia);

	DB->setString(5, mes);
	DB->setInt(6, anio);
	DB->setString(7, printBuildDateTime());
	DB->setInt(8, IDModif);
	DB->execute();
}
void Verif_datosRepet() {
	con->setSchema("yoga_");

	DB = con->prepareStatement("SELECT * FROM yoha_spa WHERE nombre = ? AND apellido = ?;");
	DB->setString(1, nombre);
	DB->setString(2, apellido);
	result = DB->executeQuery();

	while (result->next()) {
		Datos_r ++;
	}
}
void ElTurnoRepetido() {
	con->setSchema("yoga_");

	DB = con->prepareStatement("SELECT * FROM yoha_spa WHERE nombre = ? AND apellido = ?;");
	DB->setString(1, nombre);
	DB->setString(2, apellido);
	result = DB->executeQuery();

	while (result->next()) {
		printf("Tu turno es el: = (%s, %d, %s, %s, %s, %d)\n", "DIA ", result->getInt(5), "DEL MES ", result->getString(6).c_str(), "Y EL ANIO ", result->getInt(7));

	}

}
void turnoCambiado_P() {
	int dia_Verif = 0;
	con->setSchema("yoga_");

	DB = con->prepareStatement("SELECT id, dia, mes FROM turnos_disponibles where disponible = 'NO';");

	result = DB->executeQuery();

	while (result->next()) {
		veri_Dat_Repe = 0;
		dia_Verif++;
		DB = con->prepareStatement("SELECT dia, mes FROM yoha_spa WHERE dia = ? AND mes = ?;");
		DB->setInt(1, result->getInt(2));
		DB->setString(2, result->getString(3).c_str());
		result_mes = DB->executeQuery();

		while (result_mes->next()) {
			veri_Dat_Repe++;
			//cout << "Loco << " << result_mes->getString(2).c_str() << result_mes->getInt(1);
			//cout << "\n";

		}
		//cout << result->getInt(1) << "Cant" << veri_Dat_Repe;
		//cout << "\n";

		if (veri_Dat_Repe == 0)
		{
			con->setSchema("yoga_");
			DB = con->prepareStatement("UPDATE turnos_disponibles SET disponible = 'SI' WHERE id = ?;");
			DB->setInt(1, result->getInt(1));
			//DB->setString(2, result->getString(2).c_str());
			DB->executeQuery();
			//cout << "Turno cambiado" << result->getInt(1) << endl;
		}
		/*do
		{
			dia_Verif++;
			DB = con->prepareStatement("SELECT * FROM yoha_spa WHERE dia = ? AND mes = ?;");
			DB->setInt(1, dia_Verif);
			DB->setString(2, result->getString(1).c_str());
			result_mes = DB->executeQuery();

			while (result->next()) {

			}
		} while (result_mes->next());*/
		

		//cout << result->getString(2).c_str() << result->getInt(1);
		//cout << "\n";
	}
	//system("PAUSE");
}