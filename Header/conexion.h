#pragma once
#include "jdbc/mysql_connection.h"
#include <jdbc/cppconn/prepared_statement.h>
#include <iostream>
#include <jdbc/cppconn/driver.h>
#include <jdbc/cppconn/exception.h>
#include <jdbc/cppconn/sql_prepare.h>

sql::ResultSet *result;
sql::ResultSet *result_mes;
sql::PreparedStatement *DB;

//Hoost Local
const string server = "localhost";
const string username = "root";
const string password = "";

//Host Internet
//const string server = "sql104.epizy.com";
//const string username = "epiz_27849067";
//const string password = "edUXrxOkflhV";

sql::Driver* driver;
sql::Connection* con;
sql::Statement* stmt;

void Conexion() {
	try
	{
		driver = get_driver_instance();
		con = driver->connect(server, username, password);
		cout << "exitoooo" << endl;
		//system("pause");
	}
	catch (sql::SQLException e)
	{
		cout << "Could not connect to server. Error message: " << e.what() << endl;
		system("pause");
		exit(1);
	}
}
