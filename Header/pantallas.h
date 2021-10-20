#pragma once
int coq, tama = 19, Asignar = 0, Tecla;

int pantalla_menu() {

	system("cls");
	cout << "|___________________________________________|" << endl;

	cout << "|****** BIENVENIDOS AL CENTRO DE YOGA ******|" << endl;
	cout << "|****					****|" << endl;
	cout << "\n";
	Tecla = menu(5, 3, "Sacar turno", "Clientes", "Opcion Administrativa");
	/*cout << "|************	1- Sacar turno	************|" << endl;
	cout << "|****					****|" << endl;
	cout << "|************	  2- Clientes   ************|" << endl;
	cout << "|****					****|" << endl;
	cout << "|******** 3- Opcion Administrativa *********|" << endl;
	cout << "|****					****|" << endl;
	cout << "|************	    0- Salir    ************|" << endl;*/
	//cout << "|****					****|" << endl;
	//cout << "|___________________________________________|" << endl;
	//cout << "\n";
	//cout << "Ingrese una opcion: ";
	////cin >> Tecla;
	return Tecla;
}
void pantalla_turnos() {
	system("mode con: cols=50 lines=60");
	cout << "|________________________________________________|" << endl;

	cout << "|********* BIENVENIDOS AL CENTRO DE YOGA ********|" << endl;
	cout << "|*******					*****|" << endl;
	cout << "|**************   Sacar turno   *****************|" << endl;
	cout << "|*******					*****|" << endl;
	cout << "|________________________________________________|" << endl;
	cout << "\n";
	
	//system("pause");
}
void pantalla_cliente() {
	system("mode con: cols=70 lines=70");
	cout << "|_______________________________________________________________|" << endl;

	cout << "|**************** BIENVENIDOS AL CENTRO DE YOGA ****************|" << endl;
	cout << "|**************					********************|" << endl;
	cout << "|*********************	Clientes-Turnos	************************|" << endl;
	cout << "|**************					********************|" << endl;
	cout << "|_______________________________________________________________|" << endl;
	cout << "\n";
	//system("pause");
}
void pantalla_error() {
	cout << "|___________________________________________|" << endl;

	cout << "|****** BIENVENIDOS AL CENTRO DE YOGA ******|" << endl;
	cout << "|****					****|" << endl;
	cout << "|*********** Opcion Incorrecta! ************|" << endl;
	cout << "|****					****|" << endl;
	cout << "|___________________________________________|" << endl;
	cout << "\n";
	system("pause");
}
int pantalla_admin() {
	cout << "|___________________________________________|" << endl;

	cout << "|****** BIENVENIDOS AL CENTRO DE YOGA ******|" << endl;
	cout << "|****					****|" << endl;
	Tecla = menu(5, 3, "Asignar dias de turno", "Aspecto pantalla", "Modificar datos de turno", "Eliminar turno", "Salir");
	//cout << "|******** 1- Asignar dias de turno *********|" << endl;
	//cout << "|****					****|" << endl;
	//cout << "|**********  2- Aspecto pantalla  **********|" << endl;
	//cout << "|****					****|" << endl;
	//cout << "|******   3- Modificar datos de turno   ****|" << endl;
	//cout << "|****					****|" << endl;
	//cout << "|***********   4- Eliminar turno   *********|" << endl;
	//cout << "|****					****|" << endl;
	//cout << "|************	    5- Salir    ************|" << endl;
	//cout << "|****					****|" << endl;
	//cout << "|___________________________________________|" << endl;
	//cout << "\n";
	//system("pause");
	return Tecla;
}

void Error_aspecto() {
	cout << "|___________________________________________|" << endl;

	cout << "|****** CAMBIAR ASPECTO DE LA PANTALLA *****|" << endl;
	cout << "|****					****|" << endl;
	cout << "|*********** Opcion Incorrecta! ************|" << endl;
	cout << "|****					****|" << endl;
	cout << "|___________________________________________|" << endl;
	cout << "\n";
	system("pause");
}

int Aceptar_aspecto() {
	system("cls");
	cout << "|________________________________________________|" << endl;
	cout << "|******* CAMBIAR ASPECTO DE LA PANTALLA *********|" << endl;
	cout << "|****					*********|" << endl;
	cout << "|******** EL ASPECTO ES DE SU AGRADO?  **********|" << endl;
	cout << "|****					*********|" << endl;
	Tecla = menu(5, 3, "SI, ES AGRADABLE PARA TRABAJAR", "NO, VOY A CAMBIAR ESTO AHORA");

	/*cout << "|***** 0- SI, ES AGRADABLE PARA TRABAJAR  *******|" << endl;
	cout << "|****					*********|" << endl;
	cout << "|****** 1- NO, VOY A CAMBIAR ESTO AHORA.  *******|" << endl;
	cout << "|****					*********|" << endl;
	cout << "|________________________________________________|" << endl;*/
	return Tecla;
}

void LetraTamnio_aspecto() {
	system("cls");
	cout << "|___________________________________________|" << endl;
	cout << "|*** CAMBIAR TAMANIO LETRA DE LA PANTALLA **|" << endl;
	cout << "|************			************|" << endl;
	cout << "|___________________________________________|" << endl;
	cout << "\n";
	cout << "Pon el tamanio de letra: ";
	cin >> coq;
	tama = coq;
}

int No_Turno() {
	system("mode con: cols=50 lines=60");
		cout << "|______________________________________________|" << endl;
		cout << "|******* BIENVENIDOS AL CENTRO DE YOGA ********|" << endl;
		cout << "|****					*******|" << endl;
		cout << "|***** NO DISPONE DE TURNOS DISPONIBLES. ******|" << endl;
		cout << "|****					*******|" << endl;
		Asignar = menu(2, 5, "ASIGNAR NUEVOS TURNOS DE TRABAJO");

		//cout << "|***** 1- ASIGNAR NUEVOS TURNOS DE TRABAJO ****|" << endl;
		//cout << "|****					*******|" << endl;
		//cout << "|______________________________________________|" << endl;
		//cout << "\n";
		//cout << "Pon la opcion: : ";
		//cin >> Asignar;
		return Asignar;
}

void Turno_listo() {
	system("cls");
	cout << "|___________________________________________|" << endl;

	cout << "|****** BIENVENIDOS AL CENTRO DE YOGA ******|" << endl;
	cout << "|****					****|" << endl;
	cout << "|************	TURNO ASIGNADO.	************|" << endl;
	cout << "|****					****|" << endl;
	cout << "|___________________________________________|" << endl;
	cout << "\n";
	//system("pause");
}
void TurnoModificado() {
	system("cls");
	cout << "|___________________________________________|" << endl;

	cout << "|****** BIENVENIDOS AL CENTRO DE YOGA ******|" << endl;
	cout << "|****					****|" << endl;
	cout << "|***********  TURNO MODIFICADO.  ***********|" << endl;
	cout << "|****					****|" << endl;
	cout << "|___________________________________________|" << endl;
	cout << "\n";
	system("pause");

}
void TurnoEliminado() {
	system("cls");
	cout << "|___________________________________________|" << endl;

	cout << "|****** BIENVENIDOS AL CENTRO DE YOGA ******|" << endl;
	cout << "|****					****|" << endl;
	cout << "|************	TURNO ELIMINADO.    *********|" << endl;
	cout << "|****					****|" << endl;
	cout << "|___________________________________________|" << endl;
	cout << "\n";
	system("pause");

}
void TurnoRepetido() {
	system("cls");
	system("mode con: cols=60 lines=60");

	cout << "|______________________________________________________|" << endl;
	cout << "|************ BIENVENIDOS AL CENTRO DE YOGA ***********|" << endl;
	cout << "|**********					*********|" << endl;
	cout << "|***********  ESTA PERSONA YA POSEE TURNO.  ***********|" << endl;
	cout << "|**********					*********|" << endl;
	cout << "|______________________________________________________|" << endl;
	cout << "\n";
}

void aspecto() {
	CONSOLE_FONT_INFOEX cfi;
	cfi.cbSize = sizeof(cfi);
	cfi.nFont = 0;
	cfi.dwFontSize.X = 0;                   // Width of each character in the font
	cfi.dwFontSize.Y = tama;                  // Height
	cfi.FontFamily = FF_DONTCARE;
	cfi.FontWeight = FW_NORMAL;
	(cfi.FaceName, L"Consolas"); // Choose your font
	SetCurrentConsoleFontEx(GetStdHandle(STD_OUTPUT_HANDLE), FALSE, &cfi);

	/*cout << "Font: Consolas, Size: 20\n";*/
}