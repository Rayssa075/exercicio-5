#include <iostream>
using namespace std;

int main() {
    int a, b, c, soma = 0;
    
    cout << "digite o valor de a (>1), b e c ";
    cin >> a>>b>>c;

    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    for (int i = b; i <= c; i++) {
        if (i % a == 0) {
            soma += i;
        }
    }

    cout << "soma dos divisiveis por a é " << soma << endl;

    return 0;
}
