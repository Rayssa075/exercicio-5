#include <iostream>
using namespace std;
int main(){
   float op, a, b, ma, c, d, e, p1, p2, p3, mp;
   do{
   cout<<" MENU DE OPÇÕES: "<<endl;
   cout<< "opção 1:Média Aritimética "<<endl;
   cout<<"opção 2: Média Ponderada "<<endl;
   cout<<"opção 3: Sair " <<endl;
   cout<<"Digite a opção desejada: ";
   cin>> op;
   if(op==1){
       cout<< "Digite 2 valores: ";
       cin>>a>>b;
       ma=(a+b)/2;
       cout<<"A média Aritimetica é: " <<ma;
   }
   if(op==2){
       cout<<"Digite 3 valores: ";
       cin>>c>>d>>e;
       cout<<"Digite os pesos de seus respectivos valores: ";
       cin>>p1>>p2>>p3;
       mp=((c*p1)+(d*p2)+(e*p3))/(p1+p2+p3);
       cout<< "A média Ponderada é: "<<mp;
   }
   if(op==3){
       cout<<"Encerrando programa ";
   }
   if(op!=1 && op!=2 && op!=3){
       cout<< "opção invalida "<<endl;
   }
   }while(op!=3);
    return 0;
}
