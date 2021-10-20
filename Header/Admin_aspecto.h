#pragma once
#include "pantallas.h";

int co = 0;
int taLe = 0;

int aspecto_pantalla() {
	system("cls");

		cout << "|___________________________________________|" << endl;
		cout << "|******* CAMBIAR ASPECTO DE LA PANTALLA ****|" << endl;
		cout << "|****					****|" << endl;
		taLe = menu(5, 3, "Color de la pantalla y letra", "Cambiar tamanio de la letra");

		//cout << "|****** 1- Color de la pantalla y letra ****|" << endl;
		//cout << "|****					****|" << endl;
		//cout << "|******* 2- Cambiar tamanio de la letra ****|" << endl;
		//cout << "|****					****|" << endl;
		//cout << "|___________________________________________|" << endl;
		//cout << "\n";
		//cout << "Elegir opcion: ";
		//cin >> taLe;
		return taLe;
}

void ColorLetra_aspecto() {

	system("cls");
	system("mode con: cols=50 lines=50");
	do
	{
		cout << "|________________________________________________|" << endl;
		cout << "|******* CAMBIAR ASPECTO DE LA PANTALLA *********|" << endl;
		cout << "|*********				*********|" << endl;
		co = menu(5, 3, "Pantalla NEGRA y letra VERDE CLARO", "Pantalla AZUL y letra ROJO CLARO", "Pantalla BLANCO y letra PURPURA", "Pantalla NEGRA y letra BLANCO CLARO", "Pantalla AMARILLO y letra VERDE CLARO");

		//cout << "|*** 1- Pantalla NEGRA y letra VERDE CLARO ******|" << endl;
		//cout << "|*********				*********|" << endl;
		//cout << "|**** 2- Pantalla AZUL y letra ROJO CLARO *******|" << endl;
		//cout << "|*********				*********|" << endl;
		//cout << "|**** 3- Pantalla BLANCO y letra PURPURA  *******|" << endl;
		//cout << "|*********				*********|" << endl;
		//cout << "|*** 4- Pantalla NEGRA y letra BLANCO CLARO *****|" << endl;
		//cout << "|*********				*********|" << endl;
		//cout << "|** 5- Pantalla AMARILLO y letra VERDE CLARO ****|" << endl;
		//cout << "|*********				*********|" << endl;
		//cout << "|________________________________________________|" << endl;

		//cout << "Elige una opcion: ";
	/*	cin >> co;*/

		switch (co) {
		case 1:
			system("color 0a");
			break;
		case 2:
			system("color 1c");
			break;
		case 3:
			system("color 7d");
			break;
		case 4:
			system("color 0f");
			break;
		case 5:
			system("color 6a");
			break;
		default:
			/*Error_aspecto();*/
			system("cls");
			//co = 8;
			break;
		}
		if (co == 1 || co == 2 || co == 3 || co == 4 || co == 5){
			co = Aceptar_aspecto();
			/*cin >> co;*/
			if (co == 1) {
				system("cls");
			}
			else if (co == 2); {
				cout << "";
			}
			}else {
				Error_aspecto();
				system("cls");
		}
		system("cls");

	} while (co != 1);

	//0 = Negro       8 = Gris
	//	1 = Azul        9 = Azul claro
	//	2 = Verde       A = Verde claro
	//	3 = Aguamarina        B = Aguamarina claro
	//	4 = Rojo        C = Rojo claro
	//	5 = Púrpura     D = Púrpura claro
	//	6 = Amarillo    E = Amarillo claro
	//	7 = Blanco      F = Blanco brillante
}

