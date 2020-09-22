#ifndef SERVICO_H
#define SERVICO_H

#include <string>

class Servico 
{
	private:
		std::string tipoServico;  //Nome do tipo do serviço.
		float valor; //Valor do servico.
	
	public:
		Servico (const std::string, const float);
		virtual ~Servico();
		
		void setTipo(const std::string ); // Insere o tipo de serviço.
		std::string getTipo() const; // Retorna o tipo de serviço.
		
		void setValor( const float ); // Inseri o valor do serviço.                 
		float getValor() const; // Retorna o valor do servico somado as peças.
		
		void imprimir(); // Imprimi todos os dados de serviço.
};

#endif
