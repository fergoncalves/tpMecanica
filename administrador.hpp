#ifndef ADMINISTRADOR_H
#define ADMINISTRADOR_H

#include <string>
#include <vector>
#include "funcionario.hpp"

class Administrador : public Funcionario 
{

    std::string nome;
    int cargo; // 1: mecanico, 2: vendedor, 3: administrador 
    int id;
    int senha;

public:

    Administrador();
    Administrador(std::string nome, int cargo, int id, int senha);
    virtual ~Administrador(); // se nao for virtual causa comportamento indefnido na hora de liberar memoria

    void setNome (const std::string); 
    std::string getNome();
    void setCargo(const int);
    int getCargo();
    void setId(const int);
    int getId();
    void setSenha(const int);
    int getSenha();
};

#endif
