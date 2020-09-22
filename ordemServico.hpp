#ifndef ORDEM_H
#define ORDEM_H

#include <string>
#include "veiculo.hpp" 
#include "cliente.hpp" 
#include "produto.hpp"
#include "servico.hpp"

using namespace std;

class OrdemServico  
{
	private:
		std::string motivo;
		int estado;  // O estado da ordem pode ser 1:aberto ; 2:em execução; 3:fechado.
		Cliente* cliente;
		Veiculo* veiculo;
		Produto* produto;
		Servico* servico;		

	public:
		OrdemServico (const std::string, const int, Cliente*, Veiculo* );
		virtual ~OrdemServico();
		
		void setMotivo (const std::string); // Insere o motivo.
		std::string getMotivo() const; // Retorna o motivo.
		
		void setEstado (const int); // Insere o estado.
		int getEstado() const; // Retorna o estado.
		
		void setCliente (Cliente*);//Insere cliente.
		Cliente* getCliente() const; //Retorna cliente.
		
		void setVeiculo (Veiculo*);//Insere veiculo.
		Veiculo* getVeiculo() const; //Retorn veiculo.

		void setProduto (Produto*);
		Produto* getProduto();

		void setServico (Servico*);
		Servico* getServico();
		
		void imprimir(); // Imprime todos os dados da ordem.
};

#endif
