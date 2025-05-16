#include <iostream>
#include <string>

using namespace std;

struct JogadorFutebol {
    // Atributos
    string nome;
    int idade;
    string posicao; // Ex: Goleiro, Atacante, Zagueiro...
    int numeroCamisa;
    string clube;
    int numeroCartoesAmarelos;
    int numeroCartoesVermelhos;
    int partidasJogadas;
    int golsMarcados;

    // Métodos

    // Registra um novo cartão amarelo
    void registrarNumeroCartoesAmarelos() {
        numeroCartoesAmarelos++;
        cout << "Cartão amarelo registrado para " << nome << ". Total: " << numeroCartoesAmarelos << endl;
    }

    // Registra um novo cartão vermelho
    void registrarNumeroCartoesVermelhos() {
        numeroCartoesVermelhos++;
        cout << "Cartão vermelho registrado para " << nome << ". Total: " << numeroCartoesVermelhos << endl;
    }

    // Verifica se o jogador está vinculado a algum clube
    void verificarVinculoClube() {
        if (clube.empty()) {
            cout << nome << " não possui vínculo com nenhum clube no momento." << endl;
        } else {
            cout << nome << " está vinculado ao clube: " << clube << endl;
        }
    }

    // Imprime as informações do jogador
    void imprimir() {
        cout << "----- DADOS DO JOGADOR -----" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Idade: " << idade << " anos" << endl;
        cout << "Posição: " << posicao << endl;
        cout << "Número da Camisa: " << numeroCamisa << endl;
        cout << "Clube: " << (clube.empty() ? "Sem clube" : clube) << endl;
        cout << "Partidas Jogadas: " << partidasJogadas << endl;
        cout << "Gols Marcados: " << golsMarcados << endl;
        cout << "Cartões Amarelos: " << numeroCartoesAmarelos << endl;
        cout << "Cartões Vermelhos: " << numeroCartoesVermelhos << endl;
        cout << "-----------------------------" << endl;
    }
};
