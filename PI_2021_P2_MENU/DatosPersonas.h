#ifndef DATOSPERSONAS_H
#define DATOSPERSONAS_H
#include <string>
class DatosPersonas
{
public:
	DatosPersonas(std::string, std::string, std::string, std::string, int,
		std::string, std::string, std::string);
	~DatosPersonas() {};
	void EstablecerPrimerNombre(const std::string&);
	std::string ObtenerPrimerNombre() const;
	void EstablecerPrimerApellido(const std::string&);
	std::string ObtenerPrimerApellido() const;
	void EstablecerID(const std::string&);
	std::string ObtenerID()const;
	void EstablecerNumeroSeguroSocial(const std::string&);
	std::string ObtenerNumeroSeguroSocial()const;
	void EstablecerEdad(int);
	int ObtenerEdad()const;
	void EstablecerGenero(const std::string&);
	std::string ObtenerGenero()const;
	void EstablecerFechaNacimiento(const std::string&);
	std::string ObtenerFechaNacimiento()const;
	void EstablecerDireccion(const std::string&);
	std::string ObtenerDireccion()const;
	void Imprimir() const;
private:
	std::string PrimerNombre;
	std::string PrimerApellido;
	std::string ID;
	std::string NumeroSeguroSocial;
	int Edad;
	std::string Genero;
	std::string FechaNacimiento;
	std::string Direccion;
};

#endif // !DATOSPERSONAS_H