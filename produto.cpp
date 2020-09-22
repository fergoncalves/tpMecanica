#include <iostream>
#include <string> 
#include "produto.hpp"

using namespace std;


	Produto::Produto(){}

	Produto::Produto(const string nome, const float valor, const int quant){
		this->setNome(nome);
		this->setValor(valor);
		this->setQuantidade(quant);
	}

	void Produto::setNome( const string nome){
		this->nome = nome;
	}

	string Produto::getNome(){
		return nome;
	}
	
	void Produto::setValor( const float valor){
		this->valor = valor;
	}

	float Produto::getValor(){
		return valor;
	}
	
	void Produto::setQuantidade( const int quant){
		this->quantidade = quant;
	}

	int Produto::getQuantidade(){
		return quantidade;
	}
