#include <iostream>
#include <string>
#include <ctime>

using namespace std;

struct EquipeEsports {
    // Atributos
    string nome;
    string jogoPrincipal;
    string pais;
    int numeroCampeonatosVencidos;
    double valorTotalPremiacoes;
    int anoEstreia;

    // Operações
    void registrarCampeonatoVencido(double valorPremio) {
        numeroCampeonatosVencidos++;
        atualizarValorTotalPremiacoes(valorPremio);
    }

    void atualizarValorTotalPremiacoes(double valor) {
        valorTotalPremiacoes += valor;
    }

    void verificarAnoEstreia() {
        time_t t = time(0);
        tm* agora = localtime(&t);
        int anoAtual = 1900 + agora->tm_year;

        if (anoAtual == anoEstreia) {
            cout << nome << " é uma equipe novata." << endl;
        } else {
            cout << nome << " é uma equipe veterana." << endl;
        }
    }

    void imprimir() {
        cout << "----- DADOS DA EQUIPE E-SPORTS -----" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Jogo Principal: " << jogoPrincipal << endl;
        cout << "País: " << pais << endl;
        cout << "Ano de Estreia: " << anoEstreia << endl;
        cout << "Campeonatos Vencidos: " << numeroCampeonatosVencidos << endl;
        cout << "Total em Premiações: R$ " << valorTotalPremiacoes << endl;
        cout << "-------------------------------------" << endl;
    }
};
