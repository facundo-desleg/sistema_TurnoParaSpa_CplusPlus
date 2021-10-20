//Librerias
#include "jdbc/mysql_connection.h"
#include <jdbc/cppconn/prepared_statement.h>
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/sql_prepare.h>

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include "menu.h"
//#include <conio.h>

#include <windows.h>
#include <iostream>
#include <cwchar>
#include <cstdlib>
using namespace std;


//Header
#include "menus.h"
//#include "soportes.h"
//#include "rlutils.h"

#include "Header/resource1.h"
#include "Header/clientes.h"
#include "Header/conexion.h"
#include "Header/pantallas.h"
#include "Header/turno.h"
#include "Header/uso_teclado.h"
#include "Header/Admin_asignar_turno.h"
#include "Header/Admin_aspecto.h"

//using namespace rlutil;
int main() {

	aspecto();
	//PantallaCompleta();
	SetConsoleTitleA("Centro de Yoga Golischkevky");
	//system("color 5F");

	//CONEXION
	Conexion();
	/*turnoCambiado_P();*/
	
	turnos dat;
	Fecha_del_turno dat2;
	int Tecl = 0, Tecl_admin = 0;

	do {
		system("mode con: cols=45 lines=45");
		Tecl = pantalla_menu();
		switch (Tecl) {
		case 1:
			system("cls");
			pantalla_turnos();

			nombre = name();
			apellido = apell();
			edad = edad_();

			Verif_datosRepet();
			if (Datos_r != 0) {
				TurnoRepetido();
				ElTurnoRepetido();
				system("pause");
			}
			else {

				Disponible_turno();
				if (Ver_Cant >= 1) {

					do {
						/*cout << Veri_;*/
						dia = day();
						if (Veri_ == 0) {
							//cout << Veri_ << " OHHHHH";
							pantalla_error();
							Disponible_turno();
							Veri_ = 12;
						}
						else {
							Veri_ = 1;

						}
					} while (Veri_ != 1);

					mes = mes_();
					/*anio = anio_();*/

					Turno_listo();

					solicitud = printBuildDateTime();

					dat.datos_turno(nombre, apellido, edad);
					dat2.datos_fecha_turno(dia, mes, anio);

					Sacar_Turno();
					Turno_asignado();
					turnoCambiado_P();
				}
			}
			break;
		case 2:
			system("cls");
			pantalla_cliente();
			datos_db();
			break;

		case 3:
			system("cls");
			Tecl_admin = pantalla_admin();
			/*Tecl_admin = Admin();*/

			if (Tecl_admin == 1) {
				asignar_turnos();

			}
			else if (Tecl_admin == 2) {
				aspecto_pantalla();
				do
				{
					switch (taLe) {
					case 2:
						LetraTamnio_aspecto();
						aspecto();
						break;
					case 1:
						ColorLetra_aspecto();
						break;
					default:
						system("cls");
						pantalla_error();
						break;
					}
				} while (Tecl_admin != 2);
			}
			else if (Tecl_admin == 3) {
				Admin_ModificarTurno();
				nombre = name();
				apellido = apell();
				edad = edad_();

				Disponible_turno();
				if (Ver_Cant != 0) {

					do {
						dia = day();
						if (Veri_ == 0) {
							pantalla_error();
							Disponible_turno();
							Veri_ = 12;
						}
						else {
							Veri_ = 1;

						}
					} while (Veri_ != 1);

					mes = mes_();
					
					TurnoModificado();

					solicitud = printBuildDateTime();

					dat.datos_turno(nombre, apellido, edad);
					dat2.datos_fecha_turno(dia, mes, anio);

					Modificar_Turno();
					Turno_asignado();
					//FUNCION PARA DEJAR EL TURNO DISPONOIBLE SI ES QUE LO CAMBIA.
					turnoCambiado_P();
				}
			}
			else if (Tecl_admin == 4) {
				Admin_EliminarTurno();
				TurnoEliminado();
			}
			else if (Tecl_admin == 5) {
				Tecl = 1;
			}
			break;

		case 4:
			system("cls");

			exit(1);
			break;
		default:
			system("cls");
			pantalla_error();
			break;
		}
	
	} while (Tecl != 0);

	return 0;
}