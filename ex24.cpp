#include <iostream>

using namespace std;

void mostraPA(float a1, float r) {
    float termoAtual = a1;
    cout << "PA: ";
    for (int i = 1; i <= 15; i++) {
        cout << termoAtual << (i < 15 ? ", " : "");
        termoAtual += r;
    }
    cout << endl;
}

void mostraPG(float a1, float q) {
    float termoAtual = a1;
    cout << "PG: ";
    for (int i = 1; i <= 15; i++) {
        cout << termoAtual << (i < 15 ? ", " : "");
        termoAtual *= q; 
    }
    cout << endl;
}

int main() {
    int escolha;
    float primeiroTermo, razao;

    cout << "Escolha o que deseja calcular:" << endl;
    cout << "1 - Progressao Arithmetica (PA)" << endl;
    cout << "2 - Progressao Geometrica (PG)" << endl;
    cin >> escolha;

    cout << "Digite o primeiro termo (a1): ";
    cin >> primeiroTermo;
    cout << "Digite a razao: ";
    cin >> razao;

    if (escolha == 1) {
        mostraPA(primeiroTermo, razao);
    } 
    else if (escolha == 2) {
        mostraPG(primeiroTermo, razao);
    } 
    else {
        cout << "Opcao invalida!" << endl;
    }

    return 0;
}
