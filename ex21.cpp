#include <iostream>
#include <cmath>    
#include <iomanip>  

using namespace std;

int main() {
    double S = 0;
    int denominador = 50;

   
    for (int i = 1; i <= 50; i++) {
        
      
        S += pow(2, i) / denominador;

       
        denominador--;
    }

  
    cout << "O valor da soma S e: " << fixed << setprecision(2) << S << endl;

    return 0;
}
