//este es un ejemplo basico para demostrar punteros a objetos.
#include<iostream>
using namespace std;

class numero{
   int n;
public:
   numero(int valor=10){n=valor;}
   ~numero(){cout<<"Destructor"<<endl;}
   void printnumero(){cout<<n<<endl;}
};


int main(){

   //numero n[10];
   //int e=0;
   //for(;e<10;e++)
      //n[e].printnumero();

   numero *NN =new numero;//al hacer el new
                        // se ejecuta el constructor
   NN->printnumero();
   delete NN; //al acabar el ambito se ejecuta 10 destructores
   return 0;
}
