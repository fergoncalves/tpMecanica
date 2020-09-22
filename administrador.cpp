#include <vector>
#include <string> 
#include "administrador.hpp"
#include "funcionario.hpp"

using namespace std;

Administrador::Administrador(){}

Administrador::Administrador(std::string nome, int cargo, int id, int senha ){

    this->setNome(nome);
    this->setCargo(cargo);
    this->setId(id);
    this->setSenha(senha);

}

Administrador::~Administrador(){}

void Administrador::setNome (const std::string nome){
    this->nome = nome;
}

std::string Administrador::getNome(){
    return nome;
}

void Administrador::setCargo(const int cargo){
    this->cargo = cargo;
}

int Administrador::getCargo (){
    return cargo;
}

void Administrador::setId (const int id){
    this->id = id;
}

int Administrador::getId (){
    return id;
}

void Administrador::setSenha (const int senha){
    this->senha = senha;
}

int Administrador::getSenha (){
    return senha;
}
