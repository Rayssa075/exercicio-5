#include <iostream>
using namespace std;

int main() {
    float salario, maiorSalario, menorSalario;
    int depto;
    char sexo, sexoMenor;
    
  
    float somaSalarioMulheres = 0, somaSalarioDepto34 = 0;
    int contMulheres = 0, contDepto34 = 0, totalFuncionarios = 0;

    cout << "Digite um salario negativo para encerrar." << endl;

    while (true) {
        cout << "\nSalario: ";
        cin >> salario;

        if (salario < 0) break; 
        cout << "Departamento: ";
        cin >> depto;
        cout << "Sexo (m/f): ";
        cin >> sexo;

        totalFuncionarios++;

        if (totalFuncionarios == 1 || salario > maiorSalario) {
            maiorSalario = salario;
        }

    
        if (totalFuncionarios == 1 || salario < menorSalario) {
            menorSalario = salario;
            sexoMenor = sexo; 
        }

  if (sexo == 'f' || sexo == 'F') {
            somaSalarioMulheres += salario;
            contMulheres++;
        }

        // d) Média departamentos 03 e 04
        if (depto == 3 || depto == 4) {
            somaSalarioDepto34 += salario;
            contDepto34++;
        }
    }


    if (totalFuncionarios > 0) {
        cout << "\n--- RESULTADOS ---" << endl;
        cout << "a) Maior salario: " << maiorSalario << endl;

        if (contMulheres > 0)
            cout << "b) Media salarial das mulheres: " << somaSalarioMulheres / contMulheres << endl;
        
        cout << "c) Menor salario: " << menorSalario << " (Sexo: " << sexoMenor << ")" << endl;

        if (contDepto34 > 0)
            cout << "d) Media salarial Deptos 3 e 4: " << somaSalarioDepto34 / contDepto34 << endl;
            
    } else {
        cout << "Nenhum funcionario cadastrado." << endl;
    }

    return 0;
}
