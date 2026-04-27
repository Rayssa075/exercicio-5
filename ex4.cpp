C++
#include <iostream>
using namespace std;

int main() {
    int n, c;
    int a = 0;
    int b = 1;

    cout << "Digite o valor de n: ";
    cin >> n;

    if (n == 1) {
        cout << 0 << endl;
    } 
    else if (n == 2) {
        cout << 1 << endl;
    } 
    else {
        for (int i = 3; i <= n; i++) {
            c = a + b;
            a = b;
            b = c;
        }
        cout << c << endl;
    }

    return 0;
}