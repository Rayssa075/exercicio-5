#include <iostream>
#include <iomanip>

using namespace std;

void fazerPesquisa() {
    float salario, somaSalario = 0, maiorSalario = 0;
    int filhos, somaFilhos = 0, contPessoas = 0, contSalarioBaixo = 0;

    cout << "--- Pesquisa da Prefeitura ---" << endl;
    cout << "Para encerrar, digite um salario negativo." << endl;

    while (true) {
        cout << "\nDigite o salario: R$ ";
        cin >> salario;

    
        if (salario < 0) {
            break;
        }

        cout << "Digite o numero de filhos: ";
        cin >> filhos;

       
        somaSalario += salario;
        somaFilhos += filhos;
        contPessoas++;

       
        if (contPessoas == 1 || salario > maiorSalario) {
            maiorSalario = salario;
        }

       
        if (salario < 650.00) {
            contSalarioBaixo++;
        }
    }

   
    if (contPessoas > 0) {
       
        cout << "\n======= RESULTADOS DA PESQUISA =======" << endl;
        cout << "Media de salario: R$ " << somaSalario / contPessoas << endl;
        cout << "Media de filhos: " << (float)somaFilhos / contPessoas << endl;
        cout << "Maior salario: R$ " << maiorSalario << endl;
        cout << "Percentual com salario < R$ 650,00: " << (contSalarioBaixo * 100.0) / contPessoas << "%" << endl;
    } else {
        cout << "Nenhum dado foi inserido." << endl;
    }
}

int main() {
    
    fazerPesquisa();
    
    return 0;
}
