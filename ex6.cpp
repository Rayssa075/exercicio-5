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
 
int n ;
int a;
double resultado = 1.0;

cout<< "Digite um valou n";
cin >> n;


 if (n <= 0) {
    cout << "Quantidade invalida!";
} else { cout<< " VALOR \t FATORIAL"<< endl;
for ( int i = 1; i <= n; i ++) {
   
    cout<< "Digite o valor par ser calculado"<< endl;
    cin>> a;
    
    cout<< a << "\t" << calcularFatorial (a)<< endl;
}
}
return 0;
}
