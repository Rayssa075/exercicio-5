#include <iostream>
using namespace std;

int main() {
    int x, y;
    int resultado = 1;
    
    cout << "Digite o valor de x e y ";
    cin >> x>> y;
    
    for (int i = 0; i < y; i++) {
        resultado *= x;
    }
    cout << "Resultado: " << resultado << endl;
    return 0;
}
