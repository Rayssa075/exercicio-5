#include <iostream>
#include <cmath>

using namespace std;

double calcularFatorial(int n) {
    double fat = 1;
    for (int i = 1; i <= n; i++) fat *= i;
    return fat;
}

int main() {
    int n_termos, x;
    double S = 0;
    
    cout << "Digite o numero de termos: ";
    cin >> n_termos;
    cout << "Digite o valor de X: ";
    cin >> x;

    int fat_cont = 1;  
    int passo = 1;    
    int sinal = -1;    

    for (int i = 1; i <= n_termos; i++) {
      
        double termo = pow(x, i + 1) / calcularFatorial(fat_cont);
        
        S += sinal * termo;

       
        sinal *= -1;

        if (fat_cont == 4) {
            passo = -1; 
        } else if (fat_cont == 1 && i > 1) { 
            passo = 1;  
        
        fat_cont += passo;
    }

    cout << "O valor da serie S e: " << S << endl;

    return 0;
}
