//----------------------clases nivel 1--prueba de la edad del estudiante------------------------------
#include<iostream>
#include<cstring>
#include<cstdlib>

using namespace std;

class Estudiante{
private:
   int edad;      //----------atributos----------
public:
   Estudiante(int);//constructor.      |
   void cambiaredad(int);//            |-->  metodos
   void mostraredad();    //           |
};

int main(){
   int y;
   cout<<"edad:"; cin>>y;
   Estudiante est1(20);
   est1.mostraredad();
   est1.cambiaredad(y);
   est1.mostraredad();

   return 0;
}

Estudiante::Estudiante(int e){
   edad=e;
}
void Estudiante::cambiaredad(int k){
   edad=k;
}
void Estudiante::mostraredad(){
   cout<<"edad: "<<edad<<endl;
}
