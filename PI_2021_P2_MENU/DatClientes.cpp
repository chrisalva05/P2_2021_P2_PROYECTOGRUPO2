//#include <iostream>
//#include <stdexcept>
//#include "DatClientes.h"
//using namespace std;
//DatClientes::DatClientes(string nombre, string apellido, string Id, string nss, int edad = 0, string genero,
//	string fechanacimiento, string direccion, string tarjeta, string rtn)
//	:DatosPersonas(nombre, apellido, Id, nss, edad, genero, fechanacimiento, direccion) {
//}
//void DatClientes::EstablecerNumeroTarjeta(const string& tarjeta) {
//	if (tarjeta.size() <= 20)
//	{
//		NumeroTarjeta = tarjeta;
//	}
//	if (tarjeta.size() > 20)
//	{
//		NumeroTarjeta = tarjeta.substr(0, 12);
//		cerr << "El Nnumero de Tarjeta" << tarjeta << "excede la longitud maxima de 20\n"
//			"Ingrese un Numero de Tarjeta Valido" << endl;
//	}
//}
//string DatClientes::ObtenerNumeroTarjeta()const {
//	return NumeroTarjeta;
//}
//void DatClientes::EstablecerRTN(const string& rtn) {
//	if (rtn.size() == 14)
//	{
//		RTN = rtn;
//	}
//	if ((rtn.size() < 14) || (rtn.size() > 14))
//	{
//		RTN = rtn.substr(0, 14);
//		cerr << "El Nnumero de RTN" << rtn << " no esta dentro del rango definido\n"
//			"Ingrese un Numero de RTN Valido" << endl;
//	}
//}
//string DatClientes::ObtenerRTN()const {
//	return RTN;
//}
//void DatClientes::Imprimir()const {
//	DatosPersonas::Imprimir();
//	cout << "\n Con Numero de Tarjeta " << NumeroTarjeta
//		<< "\n Y numero de RTN " << RTN;
//}