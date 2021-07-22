//#include <iostream>
//#include <stdexcept>
//#include "DatosPilotos.h"
//using namespace std;
//DatosPilotos::DatosPilotos(string nombre, string apellido, string Id, string nss, int edad,
//	string genero, string fechanacimiento, string direccion, int viaje, string destino, double valorviaje)
//	:DatosPersonas(nombre, apellido, Id, nss, edad, genero, fechanacimiento, direccion) {
//	EstablecerViajeAsignado(viaje);
//	EstablecerValorViajeAsignado(valorviaje);
//}
//void DatosPilotos::EstablecerViajeAsignado(int viaje) {
//	ViajeAsignado = viaje;
//}
//int DatosPilotos::ObtenerViajeAsignado()const {
//	return ViajeAsignado;
//}
//void DatosPilotos::EstablecerDestinoViaje(const string& destino) {
//	DestinoVuelo = destino;
//}
//string DatosPilotos::ObtenerDestinoViaje()const {
//	return DestinoVuelo;
//}
//void DatosPilotos::EstablecerValorViajeAsignado(double valorviaje) {
//	if (valorviaje > 5000)
//		ValorViajeAsignado = valorviaje;
//	else
//		throw invalid_argument("El valor del viaje asignado debe ser >5000)");
//}
//double DatosPilotos::ObtenerValorViajeAsignado()const {
//	return ValorViajeAsignado;
//}
//double DatosPilotos::CalcularIngresos()const {
//	return ObtenerValorViajeAsignado();
//}
//void DatosPilotos::Imprimir()const {
//	DatosPersonas::Imprimir();
//	cout << "\n Con numero de viaje asignado " << ObtenerViajeAsignado()
//		<< "\n Con destino a " << ObtenerDestinoViaje()
//		<< "\n Con un valor de viaje de: " << ObtenerValorViajeAsignado();
//}