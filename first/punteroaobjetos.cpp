//puntero a objetos
#include<iostream>
using namespace std;

class numero{
private:
   int x;
public:
   numero();
   void mostrarnumero();
   void setn(int);
};

numero::numero(){
   x=0;
}
void numero::setn(int nn){
   x=nn;
}

void numero::mostrarnumero(){
   cout<<x<<endl;
}

int main(){
   numero *n1;// instancia de un onbjeto pero puntero.
   n1=new numero;
   n1->mostrarnumero();
   n1->setn(56);
   n1->mostrarnumero();
   delete n1;


   return 0;
}
