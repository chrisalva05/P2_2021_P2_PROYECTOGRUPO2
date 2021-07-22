#include <iostream>
#include <iomanip>
#include <fstream>
#include <string>
#include <cstdlib>
#include <vector>
#include <typeinfo>
#include "DatosClientes.h"
#include "Boletos.h"
#include "DatClientes.h"
#include "DatosAzafatas.h"
#include "DatosPersonas.h"
#include "DatosPilotos.h"
#include "Reserva.h"
#include "Aviones.h"

using namespace std;
int escribirOpcion();
void ObtenerNombreAerolinea();
void EstablecerNombreAerolinea();
void crearArchivoTexto(fstream&);
void actualizarRegistro(fstream&);
void nuevoRegistro(fstream&);
void eliminarRegistro(fstream&);
void imprimirLinea(ostream&, const DatosCliente&);
void establecerModelodelAvion();
void obtenerModelodelAvion();
void establecerTipodeAvion();
void obtenerTipodeAvion();
void establecerAsientosdelAvion();
void obtenerAsientosdelAvion();
void EstablecerNumeroTarjeta();



int obtenerClientes(const char* const);
enum Opciones {IMPRIMIR = 1, ACTUALIZAR, NUEVO, ELIMINAR, BOLETO, AVIONES, CLIENTES, PILOTOS, AZAFATAS, RESERVAASIENTOS, FINALIZAR };

int main() {
	fstream PersonasEntrada("personas.dat", ios::in  | ios::out | ios::binary);
	if (!PersonasEntrada)
	{
		cerr << "No se pudo abrir el archivo" << endl;
		exit(EXIT_FAILURE);
	}
	int opcion;
	while ((opcion = escribirOpcion()) != FINALIZAR)

	{
		switch (opcion)
		{
		case IMPRIMIR:
			crearArchivoTexto(PersonasEntrada);
			break;
		case ACTUALIZAR:
			actualizarRegistro(PersonasEntrada);
			break;
		case NUEVO:
			nuevoRegistro(PersonasEntrada);
			break;
		case ELIMINAR:
			eliminarRegistro(PersonasEntrada);
			break;
		case BOLETO:
			void Boletos::EstablecerNombreAerolinea(const string & aerolinea) {

				if (aerolinea.size() <= 20)
				{
					NombreAerolinea = aerolinea;
				}
				if (aerolinea.size() > 20)
				{
					NombreAerolinea = aerolinea.substr(0, 12);
					cerr << "La aerolinea ingresada" << aerolinea << "excede la longitud maxima de 20\n"
						"Ingrese una Aerolinea correcta" << endl;
				}
			}
			string Boletos::ObtenerNombreAerolinea()const {
				return NombreAerolinea;
			}
			void Boletos::EstablecerDestino(const string & destino) {
				if (destino.size() <= 15)
				{
					Destino = destino;
				}
				if (destino.size() > 15)
				{
					Destino = destino.substr(0, 15);
					cerr << "El Destino ingresado" << destino << "excede la longitud maxima de 20\n"
						"Se tomaron los primeros 15 caracteres" << endl;
				}
			}
			string Boletos::ObtenerDestino()const {
				return Destino;
			}
			void Boletos::EstablecerNumeroBoleto(int boleto) {
				if (boleto > 0)
				{
					NumeroBoleto = boleto;
				}
				else
					cout << "\n Ingrese un numero de boleto correcto por favor" << endl;
			}
			int Boletos::ObtenerNumeroBoleto()const {
				return NumeroBoleto;
			}
			void Boletos::Imprimir()const {
				DatosClientes::Imprimir();
				cout << "\n El nombre de la Aerolina es \t " << ObtenerNombreAerolinea();
				<< "\n  Diga su lugar de destino  " << ObtenerDestino();
				<< "\n coloque el numero de su boleto" << ObtenerNumeroBoleto();
				break;

			case AVIONES
				Aviones avion1("Airbus", "A319", "Comercial", "VP-BHJ", "120");
				cout << "La marca del avion1 es:" << avion1.obtenerMarcadeAvion() << endl;
				cout << "El modelo del avion1 es:        " << avion1.obtenerModelodelAvion() << endl;
				cout << "El tipo del avion es:           " << avion1.obtenerTipodeAvion() << endl;
				cout << "La matricula del avion1 es: " << avion1.obtenerMatriculadelAvion() << endl;
				cout << "Numero de asientos del avion:   " << avion1.obtenerAsientosdelAvion() << endl;

				cout << "----------------------------------------------------------------------";

				Aviones avion2("Boeing", "737", "Comercial", "EI-FRP", "149");
				cout << "\nLa marca del avion2 es " << avion2.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion2 es: " << avion2.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion2.obtenerTipodeAvion();
				cout << "\nLa matricula del avion2 es: " << avion2.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion2: " << avion2.obtenerAsientosdelAvion() << endl;

				cout << "-----------------------------------------------------------------------";

				Aviones avion3("McDonell Douglas", "MD-80", "Comercial", "EI-FRP", "135");
				cout << "\nLa marca del avion3 es " << avion3.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion3 es: " << avion3.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion3.obtenerTipodeAvion();
				cout << "\nLa matricula del avion3 es: " << avion3.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion3: " << avion3.obtenerAsientosdelAvion() << endl;

				cout << "-----------------------------------------------------------------------";
				Aviones avion4("Boeing", "747", "Comercial", "N718BA", "416");
				cout << "\nLa marca del avion4 es " << avion4.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion4 es: " << avion4.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion4.obtenerTipodeAvion();
				cout << "\nLa matricula del avion4 es: " << avion4.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion4: " << avion4.obtenerAsientosdelAvion() << endl;

				cout << "-----------------------------------------------------------------------";

				Aviones avion5("Airbus", "A340", "Comercial", "F-GLZQ", "375");
				cout << "\nLa marca del avion5 es " << avion5.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion5 es: " << avion5.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion5.obtenerTipodeAvion();
				cout << "\nLa matricula del avion5 es: " << avion5.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion5: " << avion5.obtenerAsientosdelAvion() << endl;

				cout << "------------------------------------------------------------------------";
				Aviones avion6("Boeing", "767", "Comercial", "N767BA", "250");
				cout << "\nLa marca del avion6 es " << avion6.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion6 es: " << avion6.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion6.obtenerTipodeAvion();
				cout << "\nLa matricula del avion6 es: " << avion6.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion6: " << avion6.obtenerAsientosdelAvion() << endl;

				cout << "---------------------------------------------------------------------------";
				Aviones avion7("AirBus", "A330", "Comercial", "EC-NGS", "335");
				cout << "\nLa marca del avion7 es " << avion7.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion7 es: " << avion7.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion7.obtenerTipodeAvion();
				cout << "\nLa matricula del avion7 es: " << avion7.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion7: " << avion7.obtenerAsientosdelAvion() << endl;

				cout << "--------------------------------------------------------------------------";
				Aviones avion8("Boeing", "757", "Comercial", "N624AG", "200");
				cout << "\nLa marca del avion8 es " << avion8.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion8 es: " << avion8.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion8.obtenerTipodeAvion();
				cout << "\nLa matricula del avion8 es: " << avion8.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion8: " << avion8.obtenerAsientosdelAvion() << endl;

				cout << "-------------------------------------------------------------------------";
				Aviones avion9("Embraer", "170", "Comercial", "HK-4455-X", "80");
				cout << "\nLa marca del avion9 es " << avion9.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion9 es: " << avion9.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion9.obtenerTipodeAvion();
				cout << "\nLa matricula del avion9 es: " << avion9.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion9: " << avion9.obtenerAsientosdelAvion() << endl;

				cout << "------------------------------------------------------------------------";
				Aviones avion10("Airbus", "320", "Comercial", "EC-MXP", "220");
				cout << "\nLa marca del avion10 es " << avion10.obtenerMarcadeAvion();
				cout << "\nEl modelo del avion10 es: " << avion10.obtenerModelodelAvion();
				cout << "\nEl tipo del avion es: " << avion10.obtenerTipodeAvion();
				cout << "\nLa matricula del avion10 es: " << avion10.obtenerMatriculadelAvion();
				cout << "\nNumero de asientos del avion10: " << avion10.obtenerAsientosdelAvion();
			
				break;
			case CLIENTES:
				void DatClientes::EstablecerNumeroTarjeta(const string & tarjeta) {
					if (tarjeta.size() <= 20)
					{
						NumeroTarjeta = tarjeta;
					}
					if (tarjeta.size() > 20)
					{
						NumeroTarjeta = tarjeta.substr(0, 12);
						cerr << "El Nnumero de Tarjeta" << tarjeta << "excede la longitud maxima de 20\n"
							"Ingrese un Numero de Tarjeta Valido" << endl;
					}
				}
				string DatClientes::ObtenerNumeroTarjeta()const {
					return NumeroTarjeta;
				}
				void DatClientes::EstablecerRTN(const string & rtn) {
					if (rtn.size() == 14)
					{
						RTN = rtn;
					}
					if ((rtn.size() < 14) || (rtn.size() > 14))
					{
						RTN = rtn.substr(0, 14);
						cerr << "El Nnumero de RTN" << rtn << " no esta dentro del rango definido\n"
							"Ingrese un Numero de RTN Valido" << endl;
					}
				}
				string DatClientes::ObtenerRTN()const {
					return RTN;
				}
				void DatClientes::Imprimir()const {
					DatosPersonas::Imprimir();
					cout << "\n Con Numero de Tarjeta " << NumeroTarjeta
						<< "\n Y numero de RTN " << RTN;
				}
				crearArchivoTexto(PersonasEntrada);
				break;
			case PILOTOS:
				void DatosPilotos::EstablecerViajeAsignado(int viaje) {
					ViajeAsignado = viaje;
				}
				int DatosPilotos::ObtenerViajeAsignado()const {
					return ViajeAsignado;
				}
				void DatosPilotos::EstablecerDestinoViaje(const string & destino) {
					DestinoVuelo = destino;
				}
				string DatosPilotos::ObtenerDestinoViaje()const {
					return DestinoVuelo;
				}
				void DatosPilotos::EstablecerValorViajeAsignado(double valorviaje) {
					if (valorviaje > 5000)
						ValorViajeAsignado = valorviaje;
					else
						throw invalid_argument("El valor del viaje asignado debe ser >5000)");
				}
				double DatosPilotos::ObtenerValorViajeAsignado()const {
					return ValorViajeAsignado;
				}
				double DatosPilotos::CalcularIngresos()const {
					return ObtenerValorViajeAsignado();
				}
				break;
			case AZAFATAS:
				void DatosAzafatas::EstablecerTareasExtras(const string & tareasextras) {
					TareasExtras = tareasextras;
				}
				string DatosAzafatas::ObtenerTareasExtras()const {
					return TareasExtras;
				}
				void DatosAzafatas::EstablecerCantidadTareasExtras(int cantidadtareasextra) {
					if (cantidadtareasextra > 0)
						CantidadTareasExtras = cantidadtareasextra;
					else
						throw invalid_argument("La cantidad de Tareas Extras es 0");
				}
				int DatosAzafatas::ObtenerCantidadTareasExtras()const {
					return CantidadTareasExtras;
				}
				void DatosAzafatas::EstablecerValorTareasExtras(double valortareas) {
					if (valortareas > 0)
						ValorTareasExtras = valortareas;
					else
						throw invalid_argument("El Valor de Tareas Extras es 0");
				}
				double DatosAzafatas::ObtenerValorTareasExtras()const {
					return ValorTareasExtras;
				}
				double DatosAzafatas::CalcularIngresos()const {
					return ObtenerValorViajeAsignado() + (ObtenerValorTareasExtras() * ObtenerCantidadTareasExtras());
				}
				break;
			case RESERVAASIENTOS:
				Reservas reserva1("Airbus A319", "Primera Clase", "M", "8");
				cout << "\n El avion en el que viajara es: " << reserva1.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva1.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva1.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva1.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva2("Boeing 737", "Clase Ejecutiva", "C", "7");
				cout << "\n El avion en el que viajara es: " << reserva2.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva2.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva2.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva2.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva3("McDonell Douglas", "Clase Economica", "P", "9");
				cout << "\n El avion en el que viajara es: " << reserva3.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva3.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva3.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva3.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva4("Boeing 747", "Clase Ejecutiva", "F", "4");
				cout << "\n El avion en el que viajara es: " << reserva4.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva4.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva4.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva4.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva5("Airbus A340", "Primera Clase", "G", "10");
				cout << "\n El avion en el que viajara es: " << reserva5.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva5.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva5.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva5.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva6("Boeing 767", "Clase Economica", "D", "11");
				cout << "\n El avion en el que viajara es: " << reserva6.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva6.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva6.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva6.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva7("AirBus A3030", "Clase Ejecutiva", "K", "6");
				cout << "\n El avion en el que viajara es: " << reserva7.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva7.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva7.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva7.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva8("Boeing 757", "Primera Clase", "J", "3");
				cout << "\n El avion en el que viajara es: " << reserva8.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva8.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva8.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva8.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva9("Embraer", "Primera Clase", "L", "5");
				cout << "\n El avion en el que viajara es: " << reserva9.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva9.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva9.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva9.obtenerFiladelAvion() << endl;

				cout << "---------------------------------------------------------------";

				Reservas reserva10("Airbus 320", "Clase Economica", "H", "10");
				cout << "\n El avion en el que viajara es: " << reserva10.obtenerAvionparaViaje() << endl;
				cout << "\n Viajara en la categoria de: " << reserva10.obtenerClasedelAvion() << endl;
				cout << "\n El pasajero ira en la fila: " << reserva10.obtenerFiladelAvion() << endl;
				cout << "\n Su numero de asiento es " << reserva10.obtenerFiladelAvion() << endl;
				
				break;


			}
		
		default:
			cerr << "Opcion incorrecta" << endl;
			break;
		}
		PersonasEntrada.clear();
	}
	system("pause");
	return 0;
}
int escribirOpcion() {
	cout << "\n Escriba su opcion" << endl;
	cout << "1- crear un archivo de texto con forma de cuentas" << endl
		<< "llamado imprimir.txt" << endl
		<< "2 - actualizar una cuenta" << endl
		<< "3 - agregar una nueva cuenta" << endl
		<< "4 - eliminar una cuenta" << endl
		<< "5 - finalizar";
	int opcion;
	cin >> opcion;
	return opcion;

}
void crearArchivoTexto(fstream& leerDelArchivo) {
	ofstream PersonasSalida("imprimir.txt", ios::out );
	if (!PersonasSalida)
	{
		cerr << "No se pudo abrir el archivo" << endl;
		exit(EXIT_FAILURE);
	}
	PersonasSalida << left << setw(20) << "Numero de identidad" << setw(20)
		<< "Nombre" << setw(20) << "Apellido" << endl << fixed;
	DatosCliente cliente;
	leerDelArchivo.read(reinterpret_cast<char*>(&cliente),
		sizeof(DatosCliente));
	while (!leerDelArchivo.eof())
	{
		if (cliente.obtenerNumeroIdentidad())
			imprimirLinea(PersonasSalida, cliente);
		leerDelArchivo.read(reinterpret_cast<char*>(&cliente),
			sizeof(DatosCliente));
	}
	
}
void actualizarRegistro(fstream& actualizarArchivo) {
	int numeroidentidad = obtenerClientes("Escriba la cuenta que se debe actualizar");
	actualizarArchivo.seekg((numeroidentidad - 1) * sizeof(DatosCliente));
	DatosCliente cliente;
	actualizarArchivo.read(reinterpret_cast<char*>(&cliente),
		sizeof(DatosCliente));
	if (cliente.obtenerNumeroIdentidad() !=0)
	{
		imprimirLinea(cout, cliente);
		cout << "\n Escriba el numero de identidad";
		int nid;
		cin >> nid;
		int idanterior = cliente.obtenerNumeroIdentidad();
		cliente.establecerNumeroIdentidad(nid);
		imprimirLinea(cout, cliente);
	
	}
}
void nuevoRegistro(fstream& insertarEnArchivo) {
	int numeroidentidad = obtenerClientes("Escriba el nuevo numero de cuenta");
	insertarEnArchivo.seekg((numeroidentidad - 1) * sizeof(DatosCliente));
	DatosCliente cliente;
	insertarEnArchivo.read(reinterpret_cast<char*>(&cliente),
		sizeof(DatosCliente));
	if (cliente.obtenerNumeroIdentidad() == 0)
	{
		string primerNombre;
		string apellidoPaterno;
		cout << "Escriba primer nombre y apellido";
		cin >> setw(20) >> primerNombre;
		cin >> setw(20) >> apellidoPaterno;
		cliente.establecerNumeroIdentidad(numeroidentidad);
		cliente.establecerPrimerNombre(primerNombre);
		cliente.establecerApellidoPaterno(apellidoPaterno);
		insertarEnArchivo.seekp((numeroidentidad - 1) *
			sizeof(DatosCliente));
		insertarEnArchivo.write(reinterpret_cast<const char*>(&cliente),
			sizeof(DatosCliente));
	}
	else
		cerr << "La cuenta " << numeroidentidad << "ya tiene informacion" << endl;
}
void eliminarRegistro(fstream& eliminarDelArchivo) {
	int numeroidentidad = obtenerClientes("Escriba la cuenta que va a eliminar");
	eliminarDelArchivo.seekg((numeroidentidad - 1) * sizeof(DatosCliente));
	DatosCliente cliente;
	eliminarDelArchivo.read(reinterpret_cast<char*>(&cliente),
		sizeof(DatosCliente));
	if (cliente.obtenerNumeroIdentidad() != 0)
	{
		DatosCliente clienteEnBlanco;
		eliminarDelArchivo.seekp((numeroidentidad - 1) *
			sizeof(DatosCliente));
		eliminarDelArchivo.write(reinterpret_cast<const char*>(&clienteEnBlanco),
			sizeof(DatosCliente));
		cout << "La cuenta" << numeroidentidad << "se elimino\n";
	}
	else
		cerr << "La cuenta " << numeroidentidad << "ya tiene informacion" << endl;
}
int obtenerClientes(const char* const indicador) {
	int numeroidentidad;
	do
	{
		cout << indicador << "1-100";
		cin >> numeroidentidad;
	} while (numeroidentidad < 1 || numeroidentidad > 100);
	return numeroidentidad;
}
void imprimirLinea(ostream& salida, const DatosCliente& registro)
{
	salida << left << setw(20) << registro.obtenerNumeroIdentidad()
		<< setw(20) << registro.obtenerPrimerNombre()
		<< setw(20) << registro.obtenerApellidoPaterno()
		<< setw(20) << right << fixed << endl;

}