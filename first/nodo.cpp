clase de nodo
#include<iostream>
using namespace std;

class nodo{
   int valor;
   nodo *sgte;
   static nodo *lista;
public:
   nodo(int);
   void imprimir();
   static void imprimirLista();
};


nodo::nodo(int n){
   valor=n;
   sgte=lista;
   lista=this;
}

void nodo::imprimir(){
   cout<<valor<<"-->";
}

void nodo::imprimirLista(){
   nodo *p=lista;
   for(;p !=NULL;p=p->sgte)
      p->imprimir();
}

nodo *nodo::lista=NULL;//inicializacion.

int main(){
   nodo a(3);
   nodo b(2);
   nodo c(1);
   c.imprimirLista();
   cout<<endl;
   //nodo::imprimirLista();tien a misma salida que la linea anterior

   return 0;
}
