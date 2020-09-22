#include <iostream>
#include <string> 
#include "ordemServico.hpp"

using namespace std;


OrdemServico::OrdemServico (const string motivo, const int estado, Cliente* cli, Veiculo* veic){

}
	
OrdemServico::~OrdemServico(){}

void OrdemServico::setMotivo(const string motivo){
		this->motivo = motivo;
}

string OrdemServico::getMotivo() const{
	return motivo;
}
	
void OrdemServico::setEstado(const int estado){
	this->estado = estado;
}
	
int OrdemServico::getEstado() const{
	return estado;
}
	
void OrdemServico::setCliente (Cliente* cli){
	this->cliente = cli;
}
	
Cliente* OrdemServico::getCliente() const{
	return cliente;
}
	
void OrdemServico::setVeiculo (Veiculo* veic){
	this->veiculo = veic;
}

Veiculo* OrdemServico::getVeiculo()const{
	return veiculo;
}
	
void OrdemServico::imprimir(){
	cout << "***** Dados da ordem: *****" << endl << endl;
	//cout << "Valor total da Ordem de Serviço:" << getValorT() << endl;
	cout << "Motivo:" << getMotivo() << endl;
	cout << "Estado:" << getEstado() << endl << endl;
	cout << "*** Dados do cliente: ***" << endl;
	//imprimeCliente();                              /*chamando função de outra classe*/
	cout << endl;
	cout << "*** Dados do veiculo: ***" << endl;
	//imprimiVeiculo();                           /*Chamada de função de outra classe*/
}