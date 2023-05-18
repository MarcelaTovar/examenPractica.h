#pragma once
#include <iostream>
#include <cstring>
using namespace std;
class Usuario
{
private:
	string contra;
	string nombre;
	string username;
	int edad;
public:
	Usuario(string,int,string,string);
	string getNombre();
	string getUser();
	string getContra();
	int getEdad();
	void setNombre(string);
	void setUser(string);
	void setContra(string);
	void setEdad(int);
};

