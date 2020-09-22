#ifndef CLIENTE_H
#define CLIENTE_H

#include <string>
#include <vector>
#include "veiculo.hpp"

class Cliente
{
	long int cpf; 
	std::string nome;
	long int telefone;
	std::vector<Veiculo*> veiculos;

public:

	Cliente();
	Cliente ( const long int, const std::string, const long int); 
	virtual ~Cliente();
	
	void setCpf( const long int);
	long int getCpf();
	
	void setNome( const std::string );
	std::string getNome();
	
	void setTelefone( const long int ); 
	long int getTelefone(); 

	void adicinar(Veiculo*);
	
	void remover(Veiculo*);

	void imprimir(); 
};
#endif
