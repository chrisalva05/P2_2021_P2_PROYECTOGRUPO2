//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include "DatosClientes.h"
//using namespace std;
//
//int main() {
//	ofstream PersonasSalida("personas.dat", ios::out | ios::binary);
//	if (!PersonasSalida)
//	{
//		cerr << "No se pudo abrir el archivo " << endl;
//		exit(EXIT_FAILURE);
//	}
//	DatosCliente clienteEnBlanco;
//	for (size_t i = 0; i < 100; i++)
//		PersonasSalida.write(reinterpret_cast<const char*>(&clienteEnBlanco),
//			sizeof(DatosCliente));
//	system("pause");
//	return 0;
//}



//#include <iostream>
//#include <fstream>
//#include <cstdlib>
//#include "DatosClientes.h"
//using namespace std;
//void imprimirLinea(ostream, const DatosCliente&);
//int main() {
//	int numeroidentidad;
//	string primerNombre;
//	string apellidoPaterno;
//
//	fstream PersonasSalida("personas.dat", ios::in | ios::out | ios::binary);
//	if (!PersonasSalida)
//	{
//		cerr << "No se pudo abrir el archivo " << endl;
//		exit(EXIT_FAILURE);
//	}
//	DatosCliente cliente;
//	cout << "Escriba su numero de identidad";
//	cin >> numeroidentidad;
//	while (numeroidentidad > 0 && numeroidentidad <= 100)
//	{
//		cout << "Escriba primer nombre y apellido";
//		cin >> primerNombre;
//		cin >> apellidoPaterno;
//		cliente.establecerNumeroIdentidad(numeroidentidad);
//		cliente.establecerPrimerNombre(primerNombre);
//		cliente.establecerApellidoPaterno(apellidoPaterno);
//		PersonasSalida.seekp((cliente.obtenerNumeroIdentidad() - 1) *
//					sizeof(DatosCliente));
//		PersonasSalida.write(reinterpret_cast<const char*>(&cliente),
//			sizeof(DatosCliente));
//		cout << "Escriba el numero de identidad\n";
//		cin >> numeroidentidad;
//	}
//
//		
//	system("pause");
//	return 0;
//}
