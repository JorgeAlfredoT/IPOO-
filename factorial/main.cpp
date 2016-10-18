#include<iostream>
using namespace std;

int main(){
    short number;
    cout<<"digite un numero: ";
    cin>>number;
    cout<<"El factorial del numero dado es: "<<endl;
    int cont=1;
    for(; number>0 ; cont*=number--){
        ;
    }
    cout<<cont<<endl;

    return 0;
}
