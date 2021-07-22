//#include <iostream>
//#include <stdexcept>
//#include "DatosAzafatas.h"
//using namespace std;
//DatosAzafatas::DatosAzafatas(string nombre, string apellido, string Id, string nss, int edad,
//	string genero, string fechanacimiento, string direccion, int viaje, string destino, double valorviaje,
//	string tareasextras, int cantidadtareasextra, double valortareas = 0.0)
//	:DatosPilotos(nombre, apellido, Id, nss, edad, genero, fechanacimiento, direccion, viaje, destino, valorviaje) {
//	EstablecerCantidadTareasExtras(cantidadtareasextra);
//	EstablecerValorTareasExtras(valortareas);
//	EstablecerTareasExtras(tareasextras);
//}
//void DatosAzafatas::EstablecerTareasExtras(const string& tareasextras) {
//	TareasExtras = tareasextras;
//}
//string DatosAzafatas::ObtenerTareasExtras()const {
//	return TareasExtras;
//}
//void DatosAzafatas::EstablecerCantidadTareasExtras(int cantidadtareasextra) {
//	if (cantidadtareasextra > 0)
//		CantidadTareasExtras = cantidadtareasextra;
//	else
//		throw invalid_argument("La cantidad de Tareas Extras es 0");
//}
//int DatosAzafatas::ObtenerCantidadTareasExtras()const {
//	return CantidadTareasExtras;
//}
//void DatosAzafatas::EstablecerValorTareasExtras(double valortareas) {
//	if (valortareas > 0)
//		ValorTareasExtras = valortareas;
//	else
//		throw invalid_argument("El Valor de Tareas Extras es 0");
//}
//double DatosAzafatas::ObtenerValorTareasExtras()const {
//	return ValorTareasExtras;
//}
//double DatosAzafatas::CalcularIngresos()const {
//	return ObtenerValorViajeAsignado() + (ObtenerValorTareasExtras() * ObtenerCantidadTareasExtras());
//}
//void DatosAzafatas::Imprimir()const {
//	DatosPersonas::Imprimir();
//	cout << "\n Con numero de viaje asignado " << DatosPilotos::ObtenerViajeAsignado()
//		<< "\n Con destino a " << DatosPilotos::ObtenerDestinoViaje
//		<< "\n Con un valor de viaje de: " << DatosPilotos::ObtenerValorViajeAsignado()
//		<< "\n Con cantidad de Tareas extra de: " << ObtenerCantidadTareasExtras()
//		<< "\n Con Tareas Extras como: " << ObtenerTareasExtras()
//		<< "\n Con un valor acumulado de Tareas extras de: " << ObtenerValorTareasExtras()
//		<< "\n Sueldo Total" << CalcularIngresos();
//}