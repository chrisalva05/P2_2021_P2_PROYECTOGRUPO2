#ifndef DATOSPILOTOS_H
#define DATOSPILOTOS_H
#include "DatosPersonas.h"
#include <string>
class DatosPilotos :public DatosPersonas
{
public:
	DatosPilotos(std::string, std::string, std::string, std::string, int,
		std::string, std::string, std::string, int, std::string, double = 0.0);
	~DatosPilotos() {};
	void EstablecerViajeAsignado(int);
	int ObtenerViajeAsignado()const;
	void EstablecerDestinoViaje(const std::string&);
	std::string ObtenerDestinoViaje()const;
	void EstablecerValorViajeAsignado(double);
	double ObtenerValorViajeAsignado()const;
	virtual double CalcularIngresos()const;
	void Imprimir()const;
private:
	int ViajeAsignado;
	std::string DestinoVuelo;
	double ValorViajeAsignado;
};


#endif // !DATOSPILOTOS_H

