#include "funcionario.hpp"
#include "mecanico.hpp"

Mecanico::Mecanico(){}

Mecanico::~Mecanico(){}

Mecanico::Mecanico(std::string nome, int cargo, int id, int senha){

    this->setNome(nome);
    this->setCargo(cargo);
    this->setId(id);
    this->setSenha(senha);

}

void Mecanico::setNome (const std::string nome){
    this->nome = nome;
}

std::string Mecanico::getNome (){
    return nome;
}

void Mecanico::setCargo (const int cargo){
    this->cargo = cargo;
}

int Mecanico::getCargo (){
    return cargo;
}

void Mecanico::setId (const int id){
    this->id = id;
}

int Mecanico::getId (){
    return id;
}

void Mecanico::setSenha (const int senha){
    this->senha = senha;
}

int Mecanico::getSenha (){
    return senha;
}
