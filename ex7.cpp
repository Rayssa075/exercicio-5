#include <iostream>
using namespace std;

int main () {
 
int num;
int maior, menor;
int contador = 0;
 
 do {
     cout<< "Digite um valor positivo"<< endl;
     cin>> num;
     
     if ( num > 0){
        if ( contador == 0){
        maior = num;
        menor = num;
        contador ++;
     }
     
     else {
         if (num > maior){
             maior = num;
         }
         if ( num < menor) {
             menor = num;
         }
     }
     if ( num < 0){
         cout << " O valor é negativo"<< endl;
     }
     }
 } while (num != 0);
 
  if (contador > 0) {
      cout<< " O maior valor digitado foi: " << maior << endl;
      cout << " O menor valor digitado foi: " << menor << endl;
  } else {
      cout << " Nenhum valor positivo foi digitado" << endl;
  }
  
 
return 0;
}
