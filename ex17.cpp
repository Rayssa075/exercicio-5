#include <iostream>

using namespace std;

int main() {
    float poluicao;
    int idade, habitantes;
    
    int contador = 1;
    int cidadesPoucosHab = 0;       
    int somaIdades = 0;             
    int idadeMaisNova;              
    int cidadesVelhasPoucoHab = 0;  

    while (contador <= 10) {
        cout << "--- Cidade " << contador << " ---" << endl;
        cout << "Digite a idade da cidade: ";
        cin >> idade;
        cout << "Digite a quantidade de habitantes: ";
        cin >> habitantes;
        cout << "Digite o nivel de poluicao: ";
        cin >> poluicao;

        // a) Cidades com menos de 10.000 habitantes
        if (habitantes < 10000) {
            cidadesPoucosHab++;
        }

        somaIdades += idade;

        if (contador == 1 || idade < idadeMaisNova) {
            idadeMaisNova = idade;
        }

        if (idade > 300 && habitantes < 10000) {
            cidadesVelhasPoucoHab++;
        }

        contador++; 
    }

 
    cout << "\n======= RESULTADOS =======" << endl;
    cout << "a) Cidades com menos de 10.000 habitantes: " << cidadesPoucosHab << endl;
    cout << "b) Media de idade das cidades: " << (float)somaIdades / 10 << " anos" << endl;
    cout << "c) Idade da cidade mais nova: " << idadeMaisNova << " anos" << endl;
    cout << "d) Cidades com mais de 300 anos e menos de 10.000 habitantes: " << cidadesVelhasPoucoHab << endl;

    return 0;
}
