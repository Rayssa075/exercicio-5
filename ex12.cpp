#include <iostream>
using namespace std;

bool primo(int n) {
    if (n <= 1) {
        return false;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int num, quantos = 0;

    for (int i = 0; i < 10; i++) {
        cout << "Digite 10 numeros "<<endl;
        cin >> num;

        if (primo(num)) {
            quantos++;
        }
    }

    cout << "Tem " << quantos << " numeros primos" << endl;

    return 0;
}
