//#include <iostream>
//#include <stdexcept>
//#include "DatosPersonas.h"
//using namespace std;
//DatosPersonas::DatosPersonas(string nombre, string apellido, string Id, string nss, int edad = 0, string genero,
//	string fechanacimiento, string direccion) {
//	PrimerNombre = nombre;
//	PrimerApellido = apellido;
//	ID = Id;
//	NumeroSeguroSocial = nss;
//	EstablecerEdad(edad);
//	Genero = genero;
//	FechaNacimiento = fechanacimiento;
//	Direccion = direccion;
//}
//void DatosPersonas::EstablecerPrimerNombre(const string& nombre) {
//	if (nombre.size() <= 12)
//	{
//		PrimerNombre = nombre;
//	}
//	if (nombre.size() > 12)
//	{
//		PrimerNombre = nombre.substr(0, 12);
//		cerr << "El Nombre" << nombre << "excede la longitud maxima de 12\n"
//			"Se tomaron los primeros 12 caracteres" << endl;
//	}
//}
//string DatosPersonas::ObtenerPrimerNombre()const {
//	return PrimerNombre;
//}
//void DatosPersonas::EstablecerPrimerApellido(const string& apellido) {
//	if (apellido.size() <= 12)
//	{
//		PrimerApellido = apellido;
//	}
//	if (apellido.size() > 12)
//	{
//		PrimerApellido = apellido.substr(0, 12);
//		cerr << "El Apellido" << apellido << "excede la longitud maxima de 12\n"
//			"Se tomaron los primeros 12 caracteres" << endl;
//	}
//}
//string DatosPersonas::ObtenerPrimerApellido()const {
//	return PrimerApellido;
//}
//void DatosPersonas::EstablecerID(const string& Id) {
//	cout << "Ingrese Su Numero de Identidad NNNN-NNNN-NNNNN" << endl;
//	if (Id.size() == 15)
//	{
//		ID = Id;
//	}
//	if (Id.size() < 15)
//	{
//		ID = Id.substr(0, 15);
//		cerr << "El Nombre" << Id << " no esta correcto \n"
//			"Ingrese de nuevo su ID" << endl;
//	}
//}
//string DatosPersonas::ObtenerID()const {
//	return ID;
//}
//void DatosPersonas::EstablecerNumeroSeguroSocial(const string& nss) {
//	cout << "Ingrese Su Numero de Afliliacion A-NNNN-NNNN-NNNNNN" << endl;
//	if (nss.size() == 18)
//	{
//		NumeroSeguroSocial = nss;
//	}
//	if (nss.size() < 18)
//	{
//		NumeroSeguroSocial = nss.substr(0, 18);
//		cerr << "El Numero de Afiliado del Seguro Social" << nss << " no esta correcto \n"
//			"Ingrese de nuevo su Numero de Afiliacion del Seguro Social" << endl;
//	}
//}
//string DatosPersonas::ObtenerNumeroSeguroSocial()const {
//	return NumeroSeguroSocial;
//}
//void DatosPersonas::EstablecerEdad(int edad) {
//	if (edad > 0)
//		Edad = edad;
//	else
//		throw invalid_argument("La edad ingresada debe ser >0");
//}
//int DatosPersonas::ObtenerEdad()const {
//	return Edad;
//}
//void DatosPersonas::EstablecerGenero(const string& genero) {
//	if ((genero == "m") || (genero == "M") || (genero == "f") || (genero == "F"))
//	{
//		Genero = genero;
//	}
//	else
//	{
//		cerr << "El Caracter Ingresado" << genero << " no esta correcto \n"
//			"Ingrese de nuevo un Caracter Correcto" << endl;
//	}
//}
//string DatosPersonas::ObtenerGenero()const {
//	return Genero;
//}
//void DatosPersonas::EstablecerFechaNacimiento(const string& fechanacimiento) {
//	cout << "Ingrese Su Numero de Afliliacion DD/MM/YYYY" << endl;
//	if (fechanacimiento.size() == 10)
//	{
//		FechaNacimiento = fechanacimiento;
//	}
//	if (fechanacimiento.size() < 10)
//	{
//		FechaNacimiento = fechanacimiento.substr(0, 12);
//		cerr << "Los valores ingresados " << fechanacimiento << " no estan correcto \n"
//			"Ingrese de nuevo la fecha" << endl;
//	}
//}
//string DatosPersonas::ObtenerFechaNacimiento()const {
//	return FechaNacimiento;
//}
//void DatosPersonas::EstablecerDireccion(const string& direccion) {
//	Direccion = direccion;
//	if (direccion.size() == 70)
//	{
//		Direccion = direccion;
//	}
//	if (direccion.size() < 70)
//	{
//		Direccion = direccion.substr(0, 70);
//		cerr << "La Direccion " << direccion << " excede los limites \n"
//			"Se tomaron los primeros 70 caracteres" << endl;
//	}
//}
//string DatosPersonas::ObtenerDireccion()const {
//	return Direccion;
//}
//void DatosPersonas::Imprimir()const {
//	cout << "La Persona/Piloto/Azafata: " << PrimerNombre << " " << PrimerApellido
//		<< "\n Numero de Identidad: " << ID
//		<< "\n Numero de seguro social: " << NumeroSeguroSocial
//		<< "\n Edad: " << Edad
//		<< "\n Genero: " << Genero
//		<< "\n Fecha de Nacimiento: " << FechaNacimiento
//		<< "\n Direccion: " << Direccion;
//}