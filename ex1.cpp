#include <iostream>
using namespace std;
int main(){
    int i;
    for(i=1; i<=100; i=i+2){
        cout<<i<< endl;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
    int i=1;
    while(i<=100){
        cout<<i<< endl;
        i=i+2;
    }
    return 0;
}

#include <iostream>
using namespace std;
int main(){
int i=1;
    do
    {
        cout<<i<< endl;
        i=i+2;
    }while(i<=100);
    return 0;
}