#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H

#include <string>
#include <vector>
#include "cliente.hpp"

class Funcionario {
    
public:

    virtual void setNome(const std::string) = 0; 
	virtual std::string getNome() = 0;
    virtual void setCargo(const int) = 0;
    virtual int getCargo() = 0;
    virtual void setId(const int) = 0;
    virtual int getId() = 0;
    virtual void setSenha(const int) = 0;
    virtual int getSenha() = 0;
    
};

#endif
