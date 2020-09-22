#include <iostream>
#include <string> 
#include "veiculo.hpp"

using namespace std;

Veiculo::Veiculo (const string placa, const string marca, const string modelo, const string cor, const float quilometragem){}

Veiculo::~Veiculo(){}
	
void Veiculo :: setPlaca (const string placa){
	this->placa = placa;
}

string Veiculo :: getPlaca() const{
	return placa;
}

void Veiculo:: setMarca (const string marca){
	this->marca = marca;
}

string Veiculo:: getMarca() const{
	return marca;
}

void Veiculo:: setModelo (const string modelo){
	this->modelo = modelo;
}

string Veiculo:: getModelo() const{
	return modelo;
}

void Veiculo:: setCor (const string cor){
	this->cor = cor;
}

string Veiculo:: getCor() const{
	return cor;
}

void Veiculo:: setKm (const float quilometragem){
	this->km = quilometragem;
}

float Veiculo:: getKm()const{
	return km;
}

void Veiculo:: imprimeVeiculo(){
	
	cout << "Placa:" << getPlaca() << endl;
	cout << "Marca:" << getMarca() << endl;
	cout << "Modelo:" << getModelo() << endl;
	cout << "Cor:" << getCor() << endl;
	cout << "Quilometragem:" << getKm() << endl;
}