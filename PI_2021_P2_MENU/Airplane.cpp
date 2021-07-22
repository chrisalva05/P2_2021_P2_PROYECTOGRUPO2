//#include <iostream>
//#include <iomanip>
//#include "Aviones.h"
//
//using namespace std;
//
//int main() {
//	Aviones avion1("Airbus", "A319", "Comercial", "VP-BHJ", "120");
//	cout << "La marca del avion1 es:" << avion1.obtenerMarcadeAvion() << endl;
//	cout << "El modelo del avion1 es:        " << avion1.obtenerModelodelAvion() << endl;
//	cout << "El tipo del avion es:           " << avion1.obtenerTipodeAvion() << endl;
//	cout << "La matricula del avion1 es: " << avion1.obtenerMatriculadelAvion() << endl;
//	cout << "Numero de asientos del avion:   " << avion1.obtenerAsientosdelAvion() << endl;
//
//	cout << "----------------------------------------------------------------------";
//
//	Aviones avion2("Boeing", "737", "Comercial", "EI-FRP", "149");
//	cout << "\nLa marca del avion2 es " << avion2.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion2 es: " << avion2.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion2.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion2 es: " << avion2.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion2: " << avion2.obtenerAsientosdelAvion() << endl;
//
//	cout << "-----------------------------------------------------------------------";
//
//	Aviones avion3("McDonell Douglas", "MD-80", "Comercial", "EI-FRP", "135");
//	cout << "\nLa marca del avion3 es " << avion3.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion3 es: " << avion3.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion3.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion3 es: " << avion3.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion3: " << avion3.obtenerAsientosdelAvion() << endl;
//
//	cout << "-----------------------------------------------------------------------";
//	Aviones avion4("Boeing", "747", "Comercial", "N718BA", "416");
//	cout << "\nLa marca del avion4 es " << avion4.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion4 es: " << avion4.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion4.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion4 es: " << avion4.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion4: " << avion4.obtenerAsientosdelAvion() << endl;
//
//	cout << "-----------------------------------------------------------------------";
//
//	Aviones avion5("Airbus", "A340", "Comercial", "F-GLZQ", "375");
//	cout << "\nLa marca del avion5 es " << avion5.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion5 es: " << avion5.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion5.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion5 es: " << avion5.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion5: " << avion5.obtenerAsientosdelAvion() << endl;
//
//	cout << "------------------------------------------------------------------------";
//	Aviones avion6("Boeing", "767", "Comercial", "N767BA", "250");
//	cout << "\nLa marca del avion6 es " << avion6.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion6 es: " << avion6.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion6.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion6 es: " << avion6.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion6: " << avion6.obtenerAsientosdelAvion() << endl;
//
//	cout << "---------------------------------------------------------------------------";
//	Aviones avion7("AirBus", "A330", "Comercial", "EC-NGS", "335");
//	cout << "\nLa marca del avion7 es " << avion7.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion7 es: " << avion7.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion7.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion7 es: " << avion7.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion7: " << avion7.obtenerAsientosdelAvion() << endl;
//
//	cout << "--------------------------------------------------------------------------";
//	Aviones avion8("Boeing", "757", "Comercial", "N624AG", "200");
//	cout << "\nLa marca del avion8 es " << avion8.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion8 es: " << avion8.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion8.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion8 es: " << avion8.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion8: " << avion8.obtenerAsientosdelAvion() << endl;
//
//	cout << "-------------------------------------------------------------------------";
//	Aviones avion9("Embraer", "170", "Comercial", "HK-4455-X", "80");
//	cout << "\nLa marca del avion9 es " << avion9.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion9 es: " << avion9.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion9.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion9 es: " << avion9.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion9: " << avion9.obtenerAsientosdelAvion() << endl;
//
//	cout << "------------------------------------------------------------------------";
//	Aviones avion10("Airbus", "320", "Comercial", "EC-MXP", "220");
//	cout << "\nLa marca del avion10 es " << avion10.obtenerMarcadeAvion();
//	cout << "\nEl modelo del avion10 es: " << avion10.obtenerModelodelAvion();
//	cout << "\nEl tipo del avion es: " << avion10.obtenerTipodeAvion();
//	cout << "\nLa matricula del avion10 es: " << avion10.obtenerMatriculadelAvion();
//	cout << "\nNumero de asientos del avion10: " << avion10.obtenerAsientosdelAvion();
//	system("pause");
//	return 0;
//}