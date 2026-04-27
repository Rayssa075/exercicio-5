#include <iostream>
using namespace std;

int main() {
   
    int i; 
    float p, a;
    int menores18 = 0;
    float somaAlturaGeral = 0;
    int mais80kg = 0;


    for (int t = 1; t <= 5; t++) {
        int somaIdadeTime = 0; 
        
        for (int j = 1; j <= 11; j++) {
            cout << "Time " << t << ", Jogador " << j << ". Digite idade, peso e altura: ";
            cin >> i >> p >> a;

    
            if (i < 18) menores18++;
            if (p > 80) mais80kg++;
            
            somaIdadeTime += i;
            somaAlturaGeral += a;
        }

        
        cout << "Media de idade do Time " << t << ": " << somaIdadeTime / 11.0 << endl;
        cout << "-----------------------------------" << endl;
    }

   
    cout << "\n======= RESULTADOS FINAIS =======" << endl;
    cout << "a) Jogadores menores de 18 anos: " << menores18 << endl;
    cout << "c) Media de altura de todos os jogadores: " << somaAlturaGeral / 55.0 << "m" << endl;
    cout << "d) Porcentagem de jogadores com mais de 80kg: " << (mais80kg * 100.0) / 55.0 << "%" << endl;

    return 0;
}
