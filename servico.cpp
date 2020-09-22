#include <iostream>
#include <string> 
#include "servico.hpp"

using namespace std;

	Servico::Servico (const string tipoS, const float valorS)
    : tipoServico(tipoS), valor(valorS) {}
		
	Servico::~Servico(){}

	void Servico::setTipo( const string tipoS){
    this->tipoServico = tipoS;
  }

	string Servico::getTipo() const{
    return tipoServico;
  }
		
	void Servico::setValor( const float valorSer ){
    this->valor = valorSer;
  }

	float Servico::getValor() const{
    return valor;
  }
			
	void imprimir(){ // Imprime todos os dados de serviço. 

  } 