struct Professor {
    string nome;
    string disciplina;
    double salario;
    int cargaHoraria;

    void reajusteSalarialEmValor(double valor) {
        salario += valor;
    }

    void reajusteSalarialEmPorcentagem(double porcentagem) {
        salario += salario * (porcentagem / 100.0);
    }

    void descontoSalarialPorFaltaEmValor(double valor) {
        salario -= valor;
    }

    void descontoSalarialPorFaltaEmPorcentagem(double porcentagem) {
        salario -= salario * (porcentagem / 100.0);
    }

    void aumentarCargaHorariaDeTrabalho(int horas, double reajustePorHora) {
        cargaHoraria += horas;
        salario += reajustePorHora * horas;
    }

    void imprimir() {
        cout << "----- DADOS DO PROFESSOR -----" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Disciplina: " << disciplina << endl;
        cout << "Carga Horária: " << cargaHoraria << " h/semana" << endl;
        cout << "Salário Atual: R$ " << salario << endl;
        cout << "-------------------------------" << endl;
    }
};
