//#include <string>
#ifndef DATCLIENTES_H
#define DATLIENTES_H
#include "DatosPersonas.h"
#include <string>
class DatClientes : public DatosPersonas
{
public:
	DatClientes(std::string, std::string, std::string, std::string, int,
		std::string, std::string, std::string, std::string, std::string);
	~DatClientes() {};
	void EstablecerNumeroTarjeta(const std::string&);
	std::string ObtenerNumeroTarjeta()const;
	void EstablecerRTN(const std::string&);
	std::string ObtenerRTN()const;
	virtual void Imprimir()const;
private:
	std::string NumeroTarjeta;
	std::string RTN;
};
#endif // !DATOCLIENTES_H
