#include <iostream>
using namespace std;
int main(){
    int idade,i, p=0;
    for(i=1; i<=10; i++){
    cout<<"Digite a idade das pessoas ";
    cin>>idade;
    if(idade<18){
    p++;
    }
    }
    cout<<"numero de pessoas com menos de 18 anos: " <<p;
return 0;
}