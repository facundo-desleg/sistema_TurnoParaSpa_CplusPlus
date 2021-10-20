#pragma once
#include "pantallas.h"
#include "uso_teclado.h"
#include "conexion.h"
#include "clientes.h"

int dia_inicio = 0, dia_final = 0, i = 0, Ver_Cant = 0;
string mes_turno;

void asignar_turnos() {
	system("mode con: cols=60 lines=50");

	cout << "|__________________________________________________________|" << endl;
	cout << "|************* BIENVENIDOS AL CENTRO DE YOGA **************|" << endl;
	cout << "|*******************	                ******************|" << endl;
	cout << "|********   Determinar los dias que vas a trabajar   ******|" << endl;
	//cout << "|**************		     **************|" << endl;
	cout << "|*************    Este mes para asignar turnos    *********|" << endl;
	cout << "|*******************	                ******************|" << endl;
	cout << "|__________________________________________________________|" << endl;
	/*cout << "Determinar los dias que vas a trabajar este mes para asignar turnos" << endl;*/
	cout << "\n";

	cout << "Mes donde trabajaras (Letras): ";
	cin >> mes_turno;
	/**mes_turno = &mes_turno;*/
	cout << "Dia de inicio del mes(Numero): ";
	cin >> dia_inicio;

	cout << "Dia de finalizacion del mes (Numero): ";
	cin >> dia_final;

	for (i = dia_inicio; i < dia_final;i++)
	{
		con->setSchema("yoga_");
		DB = con->prepareStatement("INSERT INTO turnos_disponibles(dia, mes, disponible) VALUES(?,?,?)");
		DB->setInt(1, i);
		DB->setString(2, mes_turno);
		DB->setString(3, "SI");
		DB->execute();
	}
	cout << "Turnos ya asignados" << endl;
	system("pause");
}

void Disponible_turno() {
	Ver_Cant = 0;
	con->setSchema("yoga_");
	system("mode con: cols=70 lines=70");
	//select  
	DB = con->prepareStatement("SELECT * FROM turnos_disponibles where disponible = 'SI';");
	result = DB->executeQuery();

	cout << "|_________________________________________________________________|" << endl;
	cout << "|************ BIENVENIDOS AL CENTRO DE YOGA **********************|" << endl;
	cout << "|*****************					*****************|" << endl;

	while (result->next()) {
		Ver_Cant++;
		printf("|*** Turnos disponibles: = (%d, %s, %d, %s, %s, %s)\n", result->getInt(1), "DIA:", result->getInt(2), "DEL MES:", result->getString(3).c_str(), "***|");
		cout << "|*****************					***************|" << endl;
	}
	cout << "|_________________________________________________________________|" << endl;

	if (Ver_Cant == 0) {
		system("cls");
		No_Turno();
		
		if (Asignar==1)	{
			asignar_turnos();
		}
		else {
			pantalla_menu();
		}
	}
	//delete result;
	//delete DB;
	//delete con;
	//system("pause");
}



