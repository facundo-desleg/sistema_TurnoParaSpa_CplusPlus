#pragma once
#include <iostream>
#include "conios.h"
#include <windows.h>
using namespace std;

void gotoxy(int x, int y) { //funcion de coordenadas

	HANDLE hCon; //variable tipo consola windows
	hCon = GetStdHandle(STD_OUTPUT_HANDLE); //salida
	COORD dwPos; //variable de coordenadas
	dwPos.X = x;
	dwPos.Y = y;
	SetConsoleCursorPosition(hCon, dwPos); //funcion de windows.h que posisiona el cursor
}

void ocultaCursor(bool bolean) {
	CONSOLE_CURSOR_INFO cci = { 100, bolean };

	SetConsoleCursorInfo(GetStdHandle(STD_OUTPUT_HANDLE), &cci);
}

int menu(int x, int y, string a) {
	int cant, tempy;
	char teclaOp;
	bool aux = true;

	ocultaCursor(false);
	cant = 1;

	if (x < 0)
		x = 0;

	if (y < 0)
		y = 0;


	tempy = y;
	cant -= 1;

	gotoxy(x, y);
	cout << char(196) << char(196) << ">";
	gotoxy(x + 3, y);
	cout << "     " << a;

	do {
		teclaOp = getch();

		if (teclaOp == -32) {
			gotoxy(x, y);
			cout << "     ";
			teclaOp = getch();

			if (teclaOp == 72) {
				if (y == tempy) {
					y = cant + tempy;
				}
				else {
					y--;
				}
			}
			else if (teclaOp == 80) {
				if (y == cant + tempy) {
					y = tempy;
				}
				else {
					y++;
				}
			}
			gotoxy(x, y);
			cout << char(196) << char(196) << ">";

			switch (y - tempy + 1) {
			case 1:
				gotoxy(x + 3, tempy);
				cout << "     " << a;
				break;
			}
		}
		else if (teclaOp == 13) {
			aux = false;
		}
	} while (aux);
	ocultaCursor(true);
	return y - tempy + 1;
}

int menu(int x, int y, string a, string b) {
	int cant, tempy;
	char teclaOp;
	bool aux = true;

	ocultaCursor(false);
	cant = 2;

	if (x < 0)
		x = 0;

	if (y < 0)
		y = 0;


	tempy = y;
	cant -= 1;

	gotoxy(x, y);
	cout << char(196) << char(196) << ">";
	gotoxy(x + 3, y);
	cout << "     " << a;
	gotoxy(x, y + 1);
	cout << "     " << b;

	do {
		teclaOp = getch();

		if (teclaOp == -32) {
			gotoxy(x, y);
			cout << "     ";
			teclaOp = getch();

			if (teclaOp == 72) {
				if (y == tempy) {
					y = cant + tempy;
				}
				else {
					y--;
				}
			}
			else if (teclaOp == 80) {
				if (y == cant + tempy) {
					y = tempy;
				}
				else {
					y++;
				}
			}
			gotoxy(x, y);
			cout << char(196) << char(196) << ">";

			switch (y - tempy + 1) {
			case 1:
				gotoxy(x + 3, tempy);
				cout << "     " << a;
				gotoxy(x, tempy + 1);
				cout << "     " << b << "     ";
				break;

			case 2:
				gotoxy(x, tempy);
				cout << "     " << a << "     ";
				gotoxy(x + 3, tempy + 1);
				cout << "     " << b;
				break;
			}
		}
		else if (teclaOp == 13) {
			aux = false;
		}
	} while (aux);
	ocultaCursor(true);
	return y - tempy + 1;
}

int menu(int x, int y, string a, string b, string c) {
	int cant, tempy;
	char teclaOp;
	bool aux = true;

	ocultaCursor(false);
	cant = 3;

	if (x < 0)
		x = 0;

	if (y < 0)
		y = 0;


	tempy = y;
	cant -= 1;

	gotoxy(x, y);
	cout << char(196) << char(196) << ">";
	gotoxy(x + 3, y);
	cout << "     " << a;
	gotoxy(x, y + 1);
	cout << "     " << b;
	gotoxy(x, y + 2);
	cout << "     " << c;

	do {
		teclaOp = getch();

		if (teclaOp == -32) {
			gotoxy(x, y);
			cout << "     ";
			teclaOp = getch();

			if (teclaOp == 72) {
				if (y == tempy) {
					y = cant + tempy;
				}
				else {
					y--;
				}
			}
			else if (teclaOp == 80) {
				if (y == cant + tempy) {
					y = tempy;
				}
				else {
					y++;
				}
			}
			gotoxy(x, y);
			cout << char(196) << char(196) << ">";

			switch (y - tempy + 1) {
			case 1:
				gotoxy(x + 3, tempy);
				cout << "     " << a;
				gotoxy(x, tempy + 1);
				cout << "     " << b << "     ";
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";

				break;

			case 2:
				gotoxy(x, tempy);
				cout << "     " << a << "     ";
				gotoxy(x + 3, tempy + 1);
				cout << "     " << b;
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";

				break;

			case 3:
				gotoxy(x, tempy);
				cout << "     " << a << "      ";
				gotoxy(x, tempy + 1);
				cout << "     " << b << "      ";
				gotoxy(x + 3, tempy + 2);
				cout << "     " << c;

				break;
			}
		}
		else if (teclaOp == 13) {
			aux = false;
		}
	} while (aux);
	ocultaCursor(true);
	return y - tempy + 1;
}

int menu(int x, int y, string a, string b, string c, string d) {
	int cant, tempy;
	char teclaOp;
	bool aux = true;

	ocultaCursor(false);
	cant = 4;

	if (x < 0)
		x = 0;

	if (y < 0)
		y = 0;


	tempy = y;
	cant -= 1;

	gotoxy(x, y);
	cout << char(196) << char(196) << ">";
	gotoxy(x + 3, y);
	cout << "     " << a;
	gotoxy(x, y + 1);
	cout << "     " << b;
	gotoxy(x, y + 2);
	cout << "     " << c;
	gotoxy(x, y + 3);
	cout << "     " << d;

	do {
		teclaOp = getch();

		if (teclaOp == -32) {
			gotoxy(x, y);
			cout << "     ";
			teclaOp = getch();

			if (teclaOp == 72) {
				if (y == tempy) {
					y = cant + tempy;
				}
				else {
					y--;
				}
			}
			else if (teclaOp == 80) {
				if (y == cant + tempy) {
					y = tempy;
				}
				else {
					y++;
				}
			}
			gotoxy(x, y);
			cout << char(196) << char(196) << ">";

			switch (y - tempy + 1) {
			case 1:
				gotoxy(x + 3, tempy);
				cout << "     " << a;
				gotoxy(x, tempy + 1);
				cout << "     " << b << "     ";
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";
				gotoxy(x, tempy + 3);
				cout << "     " << d << "     ";

				break;

			case 2:
				gotoxy(x, tempy);
				cout << "     " << a << "     ";
				gotoxy(x + 3, tempy + 1);
				cout << "     " << b;
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";
				gotoxy(x, tempy + 3);
				cout << "     " << d << "     ";

				break;

			case 3:
				gotoxy(x, tempy);
				cout << "     " << a << "      ";
				gotoxy(x, tempy + 1);
				cout << "     " << b << "      ";
				gotoxy(x + 3, tempy + 2);
				cout << "     " << c;
				gotoxy(x, tempy + 3);
				cout << "     " << d << "     ";

				break;

			case 4:
				gotoxy(x, tempy);
				cout << "     " << a << "      ";
				gotoxy(x, tempy + 1);
				cout << "     " << b << "      ";
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";
				gotoxy(x + 3, tempy + 3);
				cout << "     " << d;

				break;
			}
		}
		else if (teclaOp == 13) {
			aux = false;
		}
	} while (aux);
	ocultaCursor(true);
	return y - tempy + 1;
}

int menu(int x, int y, string a, string b, string c, string d, string e) {
	int cant, tempy;
	char teclaOp;
	bool aux = true;

	ocultaCursor(false);
	cant = 5;

	if (x < 0)
		x = 0;

	if (y < 0)
		y = 0;


	tempy = y;
	cant -= 1;

	gotoxy(x, y);
	cout << char(196) << char(196) << ">";
	gotoxy(x + 3, y);
	cout << "     " << a;
	gotoxy(x, y + 1);
	cout << "     " << b;
	gotoxy(x, y + 2);
	cout << "     " << c;
	gotoxy(x, y + 3);
	cout << "     " << d;
	gotoxy(x, y + 4);
	cout << "     " << e;

	do {
		teclaOp = getch();

		if (teclaOp == -32) {
			gotoxy(x, y);
			cout << "     ";
			teclaOp = getch();

			if (teclaOp == 72) {
				if (y == tempy) {
					y = cant + tempy;
				}
				else {
					y--;
				}
			}
			else if (teclaOp == 80) {
				if (y == cant + tempy) {
					y = tempy;
				}
				else {
					y++;
				}
			}
			gotoxy(x, y);
			cout << char(196) << char(196) << ">";

			switch (y - tempy + 1) {
			case 1:
				gotoxy(x + 3, tempy);
				cout << "     " << a;
				gotoxy(x, tempy + 1);
				cout << "     " << b << "     ";
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";
				gotoxy(x, tempy + 3);
				cout << "     " << d << "     ";
				gotoxy(x, tempy + 4);
				cout << "     " << e << "     ";
				break;

			case 2:
				gotoxy(x, tempy);
				cout << "     " << a << "     ";
				gotoxy(x + 3, tempy + 1);
				cout << "     " << b;
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";
				gotoxy(x, tempy + 3);
				cout << "     " << d << "     ";
				gotoxy(x, tempy + 4);
				cout << "     " << e << "     ";
				break;

			case 3:
				gotoxy(x, tempy);
				cout << "     " << a << "      ";
				gotoxy(x, tempy + 1);
				cout << "     " << b << "      ";
				gotoxy(x + 3, tempy + 2);
				cout << "     " << c;
				gotoxy(x, tempy + 3);
				cout << "     " << d << "     ";
				gotoxy(x, tempy + 4);
				cout << "     " << e << "     ";
				break;

			case 4:
				gotoxy(x, tempy);
				cout << "     " << a << "      ";
				gotoxy(x, tempy + 1);
				cout << "     " << b << "      ";
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";
				gotoxy(x + 3, tempy + 3);
				cout << "     " << d;
				gotoxy(x, tempy + 4);
				cout << "     " << e << "     ";
				break;

			case 5:
				gotoxy(x, tempy);
				cout << "     " << a << "      ";
				gotoxy(x, tempy + 1);
				cout << "     " << b << "      ";
				gotoxy(x, tempy + 2);
				cout << "     " << c << "     ";
				gotoxy(x, tempy + 3);
				cout << "     " << d << "     ";
				gotoxy(x + 3, tempy + 4);
				cout << "     " << e;
				break;
			}
		}
		else if (teclaOp == 13) {
			aux = false;
		}
	} while (aux);
	ocultaCursor(true);
	return y - tempy + 1;
}
