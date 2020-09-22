#ifndef MECANICO_H
#define MECANICO_H

#include <string>
#include <vector>
#include "funcionario.hpp"

class Mecanico : public Funcionario
{

    std::string nome;
    int cargo; // 1: mecanico, 2: vendedor, 3: administrador 
    int id;
    int senha;

public:

    Mecanico();
    Mecanico(std::string nome, int cargo, int id, int senha);
    virtual ~Mecanico();

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
