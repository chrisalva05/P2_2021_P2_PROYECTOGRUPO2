//#include <string>
//#include "DatosClientes.h"
//using namespace std;
//
//DatosCliente::DatosCliente(int nidentidad, string nombre, string apellido)
//	:numeroidentidad(nidentidad){
//	establecerNumeroIdentidad(nidentidad);
//	establecerPrimerNombre(nombre);
//	establecerApellidoPaterno(apellido);
//}
//int DatosCliente::obtenerNumeroIdentidad() const
//{
//	return numeroidentidad;
//}
//void DatosCliente::establecerNumeroIdentidad(int nidentidad) {
//	numeroidentidad = nidentidad;
//}
//string DatosCliente::obtenerPrimerNombre() const
//{
//	return primerNombre;
//}
//
//void DatosCliente::establecerPrimerNombre(string nombre) {
//	int longitud = nombre.size();
//	longitud = (longitud < 10 ? longitud : 9);
//	nombre.copy(primerNombre, longitud);
//	primerNombre[longitud] = '\0';
//}
//string DatosCliente::obtenerApellidoPaterno() const
//{
//	return apellidoPaterno;
//}
//void DatosCliente::establecerApellidoPaterno(string apellido) {
//	int longitud = apellido.size();
//	longitud = (longitud < 15 ? longitud : 14);
//	apellido.copy(apellidoPaterno, longitud);
//	apellidoPaterno[longitud] = '\0';
//}