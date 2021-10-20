#pragma once

class turnos {
public:
	string nombre = "f", apellido = "r";
	int edad = 0;

public:
	turnos();
	void datos_turno(string nombre, string apellido, int edad);
};

turnos::turnos() {
	cout << "turno creado" << endl;
	cout << "\n";
};

void turnos::datos_turno(string nombre, string apellido, int edad) {

	cout << "Datos del turno Cliente: Nombre: " << nombre << ". Apellido: " << apellido << ". Su edad: : " << edad << endl;
};

class Fecha_del_turno {
public:
	int dia = 0, anio = 0;
	string mes = "";

public:
	Fecha_del_turno();
	void datos_fecha_turno(int dia, string mes, int anio);
};

Fecha_del_turno::Fecha_del_turno() {
	cout << "Fecha creada." << endl;
	cout << "\n";
}

void Fecha_del_turno::datos_fecha_turno(int dia, string mes, int anio) {
	cout << "\n";
	cout << "Datos del dia del turno: Dia: " << dia << ". Mes: " << mes << ". Anio: " << anio << endl;
	cout << "\n";
	system("pause");
}

//char turno() {char nombre = 'a', apellido = 'a', email = 'a';return;