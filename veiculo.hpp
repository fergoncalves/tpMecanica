#ifndef VEICULO_H
#define VEICULO_H

#include <iostream>
#include <string>
//#include "ordemServico.h"

class Veiculo
{
	std::string placa; //A placa é o dado chave para buscas do veículo.
	std::string marca;
	std::string modelo;
	std::string cor;
	float km;
	//ordemServico historico[];

public:
	Veiculo (const std::string, const std::string, const std::string, const std::string, const float);
	~Veiculo();
			
	void setPlaca( const std::string ); // Insere a placa.
	std::string getPlaca() const; // Retorna a placa.
	
	void setMarca( const std::string ); // Insere a marca.
	std::string getMarca() const; // Retorna a marca.
	
	void setModelo( const std::string ); // Insere o modelo.
	std::string getModelo() const; // Retorna o modelo.
	
	void setCor( const std::string ); // Insere a cor.
	std::string getCor() const; // Retorna a cor. 
	
	void setKm( const float); // Insere a quilometragem.
	float getKm()const; // Retorna a quilometragem.
	
	void imprimeVeiculo(); // Imprime todos os dados do veículo.
};

#endif
