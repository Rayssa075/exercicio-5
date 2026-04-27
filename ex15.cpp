#include <iostream>
using namespace std;
   bool triangulo ( int a, int b, int c){
       return(a<=c+b && b<=a+c && c<=a+b);
   }
    string tipo(int a, int b, int c){
        if(a==b && b==c){
            return "equilatero ";
        }
        if(a==b||b==c||c==a){
            return "isósceles ";
        }
        if(a!=b && b!=c && a!=c){
            return "escaleno ";
        }
    }
    int main() {
    int a, b, c;
    do{
        cout<< "Indique os tres valores correespondentes: ";
        cin>>a>>b>>c; 
        if(a<=0 || b<=0 || c<=0){
        cout<< "ERRO! Os valores devem ser maiores que 0, tente novamente: " <<endl;
    }
    }while(a<=0 || b<=0 || c<=0);
    if(triangulo(a,b,c)){
        cout<< "Os valores formam um triangulo de tipo "<< (tipo(a,b,c));
    }

    return 0;
}
