#include <iostream>
using namespace std;

int main() {
    float nota, soma;
   
    for (int i = 1; i <= 10; i++) {
        soma = 0;

        cout << "\naluno " << i << "\n";

        for (int j = 1; j <= 4; j++) {
            cout << "digite a nota da prova " << j << " ";
            cin >> nota;
            soma += nota;
        }

        cout << "nota do semestre " << soma << endl;

        if (soma >= 70) {
            cout << "aprovado\n";
        } else {
            cout << "reprovado\n";
        }
    }

    return 0;
}
