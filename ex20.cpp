#include <iostream>
using namespace std;

int main() {
    float S = 0;
    int num = 1;

    for (int den = 1; den <= 50; den++) {
        S += (float)num / den;
        num += 2; 
    }
    cout << "S é " << S << endl;

    return 0;
}
