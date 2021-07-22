//#include <iostream>
//#include <iomanip>
//#include <fstream>
//#include <cstdlib>
//#include "DatosClientes.h"
//
//using namespace std;
//void imprimirLinea(ostream&, const DatosCliente&);
//int main() {
//	ifstream PersonasEntrada("personas.dat", ios::in | ios::binary);
//	if (!PersonasEntrada)
//	{
//		cerr << "No se pudo abrir el archivo" << endl;
//		exit(EXIT_FAILURE);
//	}
//	cout << left << setw(20) << "Numero de identidad" << setw(20)
//		<< "Nombre" << setw(20) << "Apellido" << endl << fixed;
//	DatosCliente cliente;
//	PersonasEntrada.read(reinterpret_cast<char*>(&cliente)*
//		sizeof(DatosCliente));
//	while (PersonasEntrada && !PersonasEntrada.eof())
//	{
//		if (cliente.obtenerNumeroIdentidad() != 0 )
//			imprimirLinea(cout, cliente);
//		PersonasEntrada.read(reinterpret_cast<char*>(&cliente)*
//			sizeof(DatosCliente));
//	}
//	system("pause");
//	return 0;
//}
//void imprimirLinea(ostream& salida, const DatosCliente& registro)
//{
//	salida << left << setw(20) << registro.obtenerNumeroIdentidad()
//		<< setw(20) << registro.obtenerPrimerNombre()
//		<< setw(20) << registro.obtenerApellidoPaterno()
//		<< setw(20) << right << fixed << endl;
//		
//}