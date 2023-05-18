#include "Usuario.h"
using namespace std;

Usuario::Usuario(string _nombre, int _edad, string _username, string _contra) {
	this->nombre = _nombre;
	this->edad = _edad;
	this->username = username;
	this->contra = contra;
}
string Usuario::getNombre() {
	return this->nombre;
}
string Usuario::getUser() {
	return this->username;
}
string Usuario::getContra() {
	return this->contra;
}
int Usuario::getEdad() {
	return this->edad;
}
void Usuario::setUser(string _usuario) {
	this->username = _usuario;
}
void Usuario::setNombre(string _nombre) {
	this->nombre = _nombre;
}
void Usuario::setContra(string _contra) {
	this->contra = _contra;
}
void Usuario::setEdad(int _edad) {
	this->edad = _edad;
}
