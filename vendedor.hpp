#ifndef VENDEDOR_H
#define VENDEDOR_H

#include <string>
#include <vector>
#include "funcionario.hpp"

class Vendedor : public Funcionario
{

    std::string nome;
    int cargo; // 1: mecanico, 2: vendedor, 3: administrador 
    int id;
    int senha;
    
public:

    Vendedor();
    Vendedor(std::string nome, int cargo, int id, int senha );
    ~Vendedor();

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
