#ifndef BOLETOS_H
#define BOLETOS_H
#include "DatosClientes.h"
#include <string>

class Boletos : public DatosClientes
{
public:
	Boletos(std::string, std::string, std::string, std::string, int,
		std::string, std::string, std::string, std::string, std::string,
		std::string, std::string, int);
	~Boletos() {};
	void EstablecerNombreAerolinea(const std::string&);
	std::string ObtenerNombreAerolinea()const;
	void EstablecerDestino(const std::string&);
	std::string ObtenerDestino()const;
	void EstablecerNumeroBoleto(int);
	int ObtenerNumeroBoleto()const;
	virtual void Imprimir() const override;
private:
	std::string NombreAerolinea;
	std::string Destino;
	int NumeroBoleto;
};

#endif // !BOLETOS_H

