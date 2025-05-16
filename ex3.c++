struct Produto {
    string nome;
    string categoria;
    double preco;
    int quantidadeEstoque;

    void aplicarCupomDescontoValor(double valor) {
        if (valor < preco) {
            preco -= valor;
        } else {
            cout << "Desconto inválido. Valor maior que o preço." << endl;
        }
    }

    void aplicarCupomDescontoPorcentagem(double porcentagem) {
        preco -= preco * (porcentagem / 100.0);
    }

    void verificarQuantidadeEmEstoque() {
        cout << "Quantidade em estoque de " << nome << ": " << quantidadeEstoque << endl;
    }

    void imprimir() {
        cout << "----- DADOS DO PRODUTO -----" << endl;
        cout << "Nome: " << nome << endl;
        cout << "Categoria: " << categoria << endl;
        cout << "Preço: R$ " << preco << endl;
        cout << "Estoque: " << quantidadeEstoque << " unidades" << endl;
        cout << "-----------------------------" << endl;
    }
};
