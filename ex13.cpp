#include <iostream>
using namespace std;

float media() {
    int num, soma = 0, q = 0;

    cout << "digite numeros positivos\n";
    cin >> num;
    while (num != 0) {
        soma += num;
        q++;

        cin >> num;
    }

    if (q == 0) return 0;

    return (float)soma / q;
}

int main() {
    float resultado = media();

    cout << "a media é " << resultado << endl;

    return 0;
}
