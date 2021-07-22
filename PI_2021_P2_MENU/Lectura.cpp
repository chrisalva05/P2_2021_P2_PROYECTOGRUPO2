//#include <iostream>
//#include <string>
//#include <fstream>
//#include <cstdlib>
//#include <iomanip>
//using namespace std;
//void imprimirLinea(string, string, string, string);
//int main() {
//	ifstream archivoClientesEntrada("clientes.txt", ios::in);
//	if (!archivoClientesEntrada)
//	{
//		cerr << "No se pudo abrir el archivo " << endl;
//		exit(EXIT_FAILURE);
//	}
//	string nombre;
//	string avion;
//	string clase;
//	string boleto;
//	cout << left << setw(20) << "Avion" << setw(20) << "Clase" << setw(20) << "Nombre" << setw(20) << "Boleto" << endl << fixed;
//		
//
//	while (archivoClientesEntrada >> avion >> clase >> nombre >> boleto)
//		imprimirLinea(avion, clase, nombre, boleto);
//	system("pause");
//	return 0;
//}
//void imprimirLinea(string avion, string clase, string nombre, string boleto) {
//	cout << left << setw(20) << avion << setw(20) << clase
//		<< setw(20) << nombre << setw(20) << boleto << right << endl;
//
//}