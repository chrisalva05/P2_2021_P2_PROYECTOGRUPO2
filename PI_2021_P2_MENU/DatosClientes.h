//#include <string>
#ifndef DATOSCLIENTE_H
#define DATOSCLIENTE_h

class DatosCliente
{
public:
	DatosCliente(int = 0, std::string = "", std::string = "" );
	void establecerNumeroIdentidad(int);
	int obtenerNumeroIdentidad() const;
	void establecerApellidoPaterno(std::string);
	std::string obtenerApellidoPaterno() const;
	void establecerPrimerNombre(std::string);
	std::string obtenerPrimerNombre() const;
private:
	int numeroidentidad;
	char apellidoPaterno [15];
	char primerNombre [10];
};
 
#endif //!DATOSCLIENTE_H
