//#include <iostream>
//#include <stdexcept>
//#include "Boletos.h"
//using namespace std;
//
//Boletos::Boletos(string nombre, string apellido, string Id, string nss, int edad = 0, string genero,
//	string fechanacimiento, string direccion, string tarjeta, string rtn, string aerolinea, string destino, int numeroboleto)
//	:DatosClientes(nombre, apellido, Id, nss, edad, genero, fechanacimiento, direccion, tarjeta, rtn) {
//}
//
//void Boletos::EstablecerNombreAerolinea(const string& aerolinea) {
//	if (aerolinea.size() <= 20)
//	{
//		NombreAerolinea = aerolinea;
//	}
//	if (aerolinea.size() > 20)
//	{
//		NombreAerolinea = aerolinea.substr(0, 12);
//		cerr << "La aerolinea ingresada" << aerolinea << "excede la longitud maxima de 20\n"
//			"Ingrese una Aerolinea correcta" << endl;
//	}
//}
//string Boletos::ObtenerNombreAerolinea()const {
//	return NombreAerolinea;
//}
//void Boletos::EstablecerDestino(const string& destino) {
//	if (destino.size() <= 15)
//	{
//		Destino = destino;
//	}
//	if (destino.size() > 15)
//	{
//		Destino = destino.substr(0, 15);
//		cerr << "El Destino ingresado" << destino << "excede la longitud maxima de 20\n"
//			"Se tomaron los primeros 15 caracteres" << endl;
//	}
//}
//string Boletos::ObtenerDestino()const {
//	return Destino;
//}
//void Boletos::EstablecerNumeroBoleto(int boleto) {
//	if (boleto > 0)
//	{
//		NumeroBoleto = boleto;
//	}
//	else
//		cout << "\n Ingrese un numero de boleto correcto por favor" << endl;
//}
//int Boletos::ObtenerNumeroBoleto()const {
//	return NumeroBoleto;
//}
//void Boletos::Imprimir()const {
//	DatosClientes::Imprimir();
//	cout << "\n El nombre de la Aerolina es \t " << ObtenerNombreAerolinea();
//	<< "\n  Diga su lugar de destino  " <<      ObtenerDestino();
//		<< "\n coloque el numero de su boleto" << ObtenerNumeroBoleto();
//}