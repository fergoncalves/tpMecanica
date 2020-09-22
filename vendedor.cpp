#include "funcionario.hpp"
#include "vendedor.hpp"

Vendedor::Vendedor(){}

Vendedor::~Vendedor(){}

Vendedor::Vendedor(std::string nome, int cargo, int id, int senha ){

    this->setNome(nome);
    this->setCargo(cargo);
    this->setId(id);
    this->setSenha(senha);

}

void Vendedor::setNome (const std::string nome){
    this->nome = nome;
}

std::string Vendedor::getNome(){
    return nome;
}

void Vendedor::setCargo (const int cargo){
    this->cargo = cargo;
}

int Vendedor::getCargo (){
    return cargo;
}

void Vendedor::setId ( const int id){
    this->id = id;
}

int Vendedor::getId (){
    return id;
}

void Vendedor::setSenha (const int senha){
    this->senha = senha;
}

int Vendedor::getSenha (){
    return senha;
}
