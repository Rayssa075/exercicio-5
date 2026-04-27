#include <iostream>
using namespace std;

void tabeladevalores (){
    float b;
    for (  int i = 1; i <=20; i ++) {
        b = i * 2.54;
        cout << " Valor em polegadas" << i << ", valor em centimetros: "<< b<< endl;
    }
}

int  main () {
    tabeladevalores();
    return 0;
}