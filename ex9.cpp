#include <iostream>
using namespace std;

int main() {
    int idade;
    char sexo;
    
    // Acumuladores e Contadores
    int somaGeral = 0, contGeral = 0;
    int somaMulheres = 0, contMulheres = 0;
    int somaHomens = 0, contHomens = 0;

    while (true) { 
        cout << "Digite a idade: ";
        cin >> idade;
        cout << "Digite o sexo (m/f): ";
        cin >> sexo;

     
        if (idade <= 0 || (sexo != 'm' && sexo != 'f')) {
            cout << "Entrada invalida! Encerrando..." << endl;
            break; 
        }

        
        somaGeral += idade;
        contGeral++;

        if (sexo == 'f') {
            somaMulheres += idade;
            contMulheres++;
        } 
        else if (sexo == 'm') {
            somaHomens += idade;
            contHomens++;
        }
    }

    
    cout << "\n======= RESULTADOS =======" << endl;
    
    if (contGeral > 0) {
        cout << "a) Media de idade Geral: " << (float)somaGeral / contGeral << endl;
    }

    if (contMulheres > 0) {
        cout << "b) Media de idade das Mulheres: " << (float)somaMulheres / contMulheres << endl;
    } else {
        cout << "b) Nenhuma mulher registrada." << endl;
    }

    if (contHomens > 0) {
        cout << "c) Media de idade dos Homens: " << (float)somaHomens / contHomens << endl;
    } else {
        cout << "c) Nenhum homem registrado." << endl;
    }

    return 0;
}
