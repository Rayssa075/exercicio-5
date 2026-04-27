
#include <iostream>
using namespace std;

double calcularFatorial ( int num) {
    double resultado = 1.0;
    for ( int i = 1; i <= num; i ++) {
        resultado = resultado * i;
    }
    return resultado;
}

int main () {
    int n;
    double E = 1.0;
    
    cout << "Digite o valor de n";
    cin >> n;
    
    for ( int i = 1; i <= n; i ++){
     E = E + (1.0 / calcularFatorial(i));
    }
    cout << "Resultado de E: " << E<< endl;
    return 0;
}
