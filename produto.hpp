#ifndef PRODUTO_H
#define PRODUTO_H

#include <string>

class Produto  
{
	std::string nome;
	float valor;
	int quantidade;  
	

public:

	Produto();
	Produto(const std::string, const float, const int);
	~Produto();

	void setNome(const std::string );
	std::string getNome();
	
	void setValor(const float);
	float getValor();
	
	void setQuantidade(const int);
	int getQuantidade();
	
};
#endif
		