#include <iostream>
using namespace std;

int main() {
    int a, b;
    cout << "digite 5 pares de valores a e b\n";

    for (int i = 0; i < 5; i++) {
        
         cout << "Digite o valor de a e b  ";
        cin >> a>>b;
        cout << "valores pares entre a e b são ";
        if (a % 2 != 0) {
            a++;
        }

        for (int j = a; j <= b; j += 2) {
            cout << j << " ";
        }

        cout << endl;
    }

    return 0;
}
