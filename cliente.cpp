#include <iostream>
#include <string> 
#include "cliente.hpp" 
#include "veiculo.hpp"

using namespace std;

Cliente::Cliente(){}

Cliente::~Cliente(){}

Cliente::Cliente(const long int cpf, const string nome, const long int telefone){

	this->setCpf(cpf);
	this->setNome(nome);
	this->setTelefone(telefone);
} 

void Cliente::setCpf(const long int cpf){
	this->cpf = cpf;
}

long int Cliente::getCpf(){
	return cpf;
}

void Cliente::setNome(const string nome){
	this->nome = nome;
}

string Cliente::getNome(){
	return nome;
}

void Cliente::setTelefone(const long int tel){
	this->telefone = tel;
}

long int Cliente::getTelefone(){
	return telefone;
}

void Cliente::adicinar(Veiculo* nVeiculo){

	this->veiculos.push_back(nVeiculo);
}

void Cliente::remover(Veiculo* v){
	//this->veiculos
}

void Cliente::imprimir(){
	
	cout << "CPF:" << getCpf() << endl;
	cout << "Nome:" << getNome() << endl;
	cout << "Telefone:" << getTelefone() << endl;
}