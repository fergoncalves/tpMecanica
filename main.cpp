#include <iostream> // cin, cout, endl
#include <cstdlib> // exit, EXIT_SUCCESS
#include <vector> // vector
#include "administrador.hpp"
#include "mecanico.hpp"
#include "vendedor.hpp"
#include "cliente.hpp"
#include "veiculo.hpp"
#include "servico.hpp"
#include "produto.hpp"

using namespace std;

/**************************** Declarando funções *****************************/

// estão implementadas abaixo da função main
void mostrarCabecalhoMenu();
void mostrarMenuPrincipal();
void mostrarMenuMecanico();
void mostrarMenuAdministrador();
void mostrarMenuVendedor();
void loginAdministrador();
void loginVendedor();
void loginMecanico();
void cadastrarMecanico();
void cadastrarVendedor();
void cadastrarCliente();
void cadastrarVeiculo();
void cadastrarServico();
void cadastrarProduto();
// FALTA FAZER: criar outras funcionalidades 
void liberarMemoria(); // ninguem gosta de leaks de memoria, limpando os vetores


/************************** Banco de dados do programa ************************/

static vector<Administrador*> administradores; // estatico pra garantir que só haverá uma instancia
static vector<Mecanico*> mecanicos;
static vector<Vendedor*> vendedores;
static vector<Cliente*> clientes;
static vector<Veiculo*> veiculos;
static vector<Servico*> servicos;
static vector<Produto*> produtos;

Funcionario* usuarioLogado = nullptr; // saber quem está logado, nullptr significa que ninguem está

/************************** Rotina Principal ***********************/

int main(){

    // Adm fixo
    Administrador* adm = new Administrador("Fernanda", 3, 1, 123);
    administradores.push_back(adm);

    Vendedor* vendedor1 = new Vendedor("João", 2, 10, 234);
    vendedores.push_back(vendedor1);
    Vendedor* vendedor2 = new Vendedor("Laura", 2, 11, 222);
    vendedores.push_back(vendedor2);
    Vendedor* vendedor3 = new Vendedor("Maria", 2, 12, 444);
    vendedores.push_back(vendedor3);
    Vendedor* vendedor4 = new Vendedor("Renan", 2, 13, 555);
    vendedores.push_back(vendedor4);

    Cliente* cliente1 = new Cliente(42352456721, "Lucas", 888888888);
    clientes.push_back(cliente1);
    Cliente* cliente2 = new Cliente(76543987654, "Vitor", 777777777);
    clientes.push_back(cliente2);
    Cliente* cliente3 = new Cliente(98745643287, "Maycon", 666666666);
    clientes.push_back(cliente3);
    Cliente* cliente4 = new Cliente(56734576598, "Amanda", 434565437);
    clientes.push_back(cliente4);

    Mecanico* mecanico1 = new Mecanico("Julia", 1, 22, 765);
    mecanicos.push_back(mecanico1);
    Mecanico* mecanico2 = new Mecanico("Gabriel", 1, 23, 908);
    mecanicos.push_back(mecanico2);
    Mecanico* mecanico3 = new Mecanico("Julia", 1, 24, 265);
    mecanicos.push_back(mecanico3);

    mostrarMenuPrincipal();

    liberarMemoria();

    return 0;
}

/********************************** Rotinas de Menus **********************************/

void mostrarMenuPrincipal(){

    mostrarCabecalhoMenu();

    cout << "1 Login Administrador" << endl;
    cout << "2 Login Vendedor" << endl;
    cout << "3 Login Mecânico" << endl;
    cout << "4 Sair do sistema" << endl;

    int number = 0;
    cin >> number;
    
    switch (number){

        case 1:
            
            loginAdministrador();
            break;
        case 2:
            loginVendedor();
            break;
        case 3:
            loginMecanico();
            break;
        case 4:
            cout << "Até mais!" << endl;

            liberarMemoria();
            exit(EXIT_SUCCESS);
        default:
            mostrarMenuPrincipal();
    }
}

void mostrarCabecalhoMenu(){

    cout << "\033[2J"; // Código ANSI para limpar a tela, funciona em todos os SO's 
    cout << "Bem vindo ao Sistema da Oficina \n" << endl;
    cout << "Digite a opção correspondente \n" << endl;
}

void mostrarMenuAdministrador(){
    
    mostrarCabecalhoMenu();
    cout << "1 Cadastrar Mecânico" << endl;
    cout << "2 Cadastrar Vendedor" << endl;
    cout << "3 Editar Mecânico" << endl;
    cout << "4 Editar Vendedor" << endl;
    cout << "5 Voltar" << endl;

    int number = 0;
    cin >> number;
    
    switch (number){

        case 1: // cadastrar mecanico
            cadastrarMecanico();
            break;
        case 2:
            cadastrarVendedor();
            break;
        case 3:
            // editar mecanico
            break;
        case 4:
            // editar vendedor
            break;
        case 5:
            usuarioLogado = nullptr; // desloga
            mostrarMenuPrincipal();
            break;
        default:

            mostrarMenuAdministrador();
    }
}

void mostrarMenuVendedor(){
    
    mostrarCabecalhoMenu();
    cout << "1 Cadastrar Cliente" << endl;
    cout << "2 Cadastrar Veículo" << endl;
    cout << "3 Gerar Ordem de Serviço" << endl;
    cout << "4 Aprovar Ordem de Serviço" << endl;
    cout << "5 Fechar Ordem de Serviço" << endl;
    cout << "6 Voltar" << endl;

    int number = 0;
    cin >> number;
    
    switch (number){

        case 1:
            cadastrarCliente();
            break;
        case 2:
            cadastrarVeiculo();
            break;
        case 3:
            // gerar ordem
            break;
        case 4:
            // aprovar ordem
            break;
        case 5:
            // fechar ordem
            break;
        case 6:
            mostrarMenuPrincipal();
            break;
        default:
            mostrarMenuVendedor();
    }
}

void mostrarMenuMecanico(){

    mostrarCabecalhoMenu();
    cout << "1 Ver Ordens de Serviço abertas" << endl;
    cout << "2 Cadastrar Serviço" << endl;
    cout << "3 Cadastrar Produto utilizado" << endl;
    cout << "4 Voltar" << endl;

    int number = 0;
    cin >> number;
    
    switch (number){

        case 1:
            // ver ordens de serviço
            break;
        case 2:
            cadastrarServico();
            break;
        case 3:
            cadastrarProduto();
            break;
        case 4:
            mostrarMenuPrincipal();
            break;
        default:
            mostrarMenuMecanico();
    }
}

/***************************** Rotinas de cadastros *************************/

void cadastrarMecanico(){

    int id;
    int senha;
    string nome;

    cout << "Nome do mecânico: ";
    cin >> nome;
    cout << "Id do mecânico: ";
    cin >> id;
    cout << "Senha do mecânico: ";
    cin >> senha;

    Mecanico* mec = new Mecanico(nome, 1, id, senha);
    mecanicos.push_back(mec);

    cout << "Mecanico " << mec->getNome() << " cadastrado com sucesso!" << endl;
    int resp = 1;
    cout << "Cadastrar outro (0) ou Voltar (1) ?" << endl;
    cin >> resp;

    if(resp == 0)
        cadastrarMecanico();
    else
        mostrarMenuAdministrador();
}

void cadastrarCliente(){
    
    long int cpf;
    string nome;
    long int telefone;
    
    cout << "CPF do cliente: ";
    cin >> cpf;

    cout << "Nome do cliente: ";
    cin >> nome;

    cout << "Telefone do cliente: ";
    cin >> telefone;

    Cliente* cli = new Cliente(cpf, nome, telefone);
    clientes.push_back(cli);

    cout << "Cliente " << cli->getNome() << " cadastrado com sucesso!" << endl;
    int resp = 1;
    cout << "Cadastrar outro (0) ou Voltar (1) ?" << endl;
    cin >> resp;

    if(resp == 0)
        cadastrarCliente();
    else
        mostrarMenuVendedor();

}

void cadastrarVendedor(){

    string nome;
    int id;
    int senha;

    cout << "Nome do vendedor: ";
    cin >> nome;
    cout << "Id do vendedor: ";
    cin >> id;
    cout << "Senha do vondedor: ";
    cin >> senha;

    Vendedor* ven = new Vendedor(nome, 2, id, senha);
    vendedores.push_back(ven);

    cout << "Vendedor " << ven->getNome() << " cadastrado com sucesso!" << endl;
    int resp = 1;
    cout << "Cadastrar outro (0) ou Voltar (1) ?" << endl;
    cin >> resp;

    if(resp == 0)
        cadastrarVendedor();
    else
        mostrarMenuAdministrador();

}

void cadastrarVeiculo(){ 

    string placa;
    string marca;
    string modelo;
    string cor;
    float km;
    long int cpf;

    cout << "Cpf do cliente:";
    cin >> cpf;
    cout << "Placa do veiculo:";
    cin >> placa;
    cout << "Marca do veiculo:";
    cin >> marca;
    cout << "Modelo do veiculo:";
    cin >> modelo;
    cout << "Cor do veiculo:";
    cin >> cor;
    cout << "Quilometragem do veiculo:";
    cin >> km;

    Veiculo* vei = new Veiculo(placa, marca, modelo, cor, km);

    cout << "Veiculo cadastrado com sucesso!" << endl;
    int resp = 1;
    cout << "Cadastrar outro (0) ou Voltar (1) ?" << endl;
    cin >> resp;

    if(resp == 0)
        cadastrarVeiculo();
    else
        mostrarMenuVendedor();

}

void cadastrarServico(){

    string tipo;
    float valor;

    cout << "Nome do serviço: ";
    cin >> tipo;
    cout << "Valor do serviço: ";
    cin >> valor;

    Servico* serv = new Servico(tipo, valor);
    servicos.push_back(serv);

    cout << "Serviço " << serv->getTipo() << " cadastrado com sucesso!" << endl;
    int resp = 1;
    cout << "Cadastrar outro (0) ou Voltar (1) ?" << endl;
    cin >> resp;

    if(resp == 0)
        cadastrarServico();
    else
        mostrarMenuMecanico(); 
}

void cadastrarProduto(){
    
    string nome;
    float valor;
    int quant;

    cout << "Nome do produto: ";
    cin >> nome;
    cout << "Valor do produto: ";
    cin >> valor;
    cout << "Quantidade: ";
    cin >> quant;

    Produto* prod = new Produto(nome, valor, quant);
    produtos.push_back(prod);

    cout << "Profuto " << prod->getNome() << " cadastrado com sucesso!" << endl;
    int resp = 1;
    cout << "Cadastrar outro (0) ou Voltar (1) ?" << endl;
    cin >> resp;

    if(resp == 0)
        cadastrarProduto();
    else
        mostrarMenuMecanico(); 
}

/******************************** Rotinas de Login **********************************/

void loginAdministrador(){

    int id = -1;
    int senha;
    
    cout << "Digite seu id ou digite -1 para voltar" << endl;
    cin >> id;

    if (id == -1){

        mostrarMenuPrincipal();

    } else {

        cout << "Digite sua senha" << endl;
        cin >> senha;
        usuarioLogado = nullptr; // garante que ninguem está logado

        for(auto item : administradores){
            if (item->getId() == id && item->getSenha() == senha){
                cout << "Olá, " << item->getNome() << "!" << endl;
                usuarioLogado = item; // loga o usuario
                break;
            }
        }

        if(usuarioLogado == nullptr){

            cout << "Credenciais inválidas" << endl;
            loginAdministrador();

        }else{

            mostrarMenuAdministrador();
        }
    }
}

void loginVendedor(){

    int id = -1;
    int senha;
    
    cout << "Digite seu id ou digite -1 para voltar" << endl;
    cin >> id;

    if (id == -1){

        mostrarMenuPrincipal();

    } else {

        cout << "Digite sua senha" << endl;
        cin >> senha;
        usuarioLogado = nullptr; // garante que ninguem está logado

        for(auto item : vendedores){
            if (item->getId() == id && item->getSenha() == senha){
                cout << "Olá, " << item->getNome() << "!" << endl;
                usuarioLogado = item; // loga o usuario
                break;
            }
        }

        if(usuarioLogado == nullptr){

            cout << "Credenciais inválidas" << endl;
            loginVendedor();

        }else{

            mostrarMenuVendedor();
        }
    }

}

void loginMecanico(){

    int id = -1;
    int senha;
    
    cout << "Digite seu id ou digite -1 para voltar" << endl;
    cin >> id;

    if (id == -1){

        mostrarMenuPrincipal();

    } else {

        cout << "Digite sua senha" << endl;
        cin >> senha;
        usuarioLogado = nullptr; // garante que ninguem está logado

        for(auto item : mecanicos){
            if (item->getId() == id && item->getSenha() == senha){
                cout << "Olá, " << item->getNome() << "!" << endl;
                usuarioLogado = item; // loga o usuario
                break;
            }
        }

        if(usuarioLogado == nullptr){

            cout << "Credenciais inválidas" << endl;
            loginMecanico();

        }else{

            mostrarMenuMecanico();
        }
    }


}

/********************** Rotinas Auxiliares ************************/

void liberarMemoria(){ 

    for(auto item : administradores)
        delete item;
    
    administradores.clear();

    for(auto item : mecanicos)
        delete item;
    
    mecanicos.clear();

    for(auto item : vendedores)
        delete item;

    vendedores.clear();

    for(auto item : clientes)
        delete item;
    
    clientes.clear();

    for(auto item : veiculos)
        delete item;
    
    veiculos.clear();

    for(auto item : servicos)
        delete item;
    
    servicos.clear();

    for(auto item : produtos)
        delete item;

    produtos.clear();
}