#ifndef DATOSAZAFATAS_H
#define DATOSAZAFATAS_H
#include "DatosPilotos.h"
class DatosAzafatas : public DatosPilotos
{
public:
	DatosAzafatas(std::string, std::string, std::string, std::string, int,
		std::string, std::string, std::string, int, std::string, double, std::string, int, double = 0.0);
	virtual~DatosAzafatas();
	void EstablecerTareasExtras(const std::string&);
	std::string ObtenerTareasExtras()const;
	void EstablecerCantidadTareasExtras(int);
	int ObtenerCantidadTareasExtras()const;
	void EstablecerValorTareasExtras(double);
	double ObtenerValorTareasExtras()const;
	virtual double CalcularIngresos() const override;
	virtual void Imprimir()const;

private:
	std::string TareasExtras;
	int CantidadTareasExtras;
	double ValorTareasExtras;
};
#endif // !DATOSAZAFATAS_H
