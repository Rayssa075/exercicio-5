#include <iostream>
using namespace std;

int lerquant() {
    int q;
    do {
        cout << "digite a quantidade (>= 0): ";
        cin >> q;
    } while (q < 0);
    return q;
}

float lervalor() {
    float v;
    do {
        cout << "digite o valor (> 0): ";
        cin >> v;
    } while (v <= 0);
    return v;
}

int main() {
    int n;
    float total = 0;

    cout << "digite o numero de produtos ";
    cin >> n;

    for (int i = 1; i <= n; i++) {
        cout << "\nproduto " << i << ":\n";

        int quantidade = lerquant();
        float valor = lervalor();

        total += quantidade * valor;
    }

    cout << "\nvalor total em estoque  " << total << endl;

    return 0;
}
