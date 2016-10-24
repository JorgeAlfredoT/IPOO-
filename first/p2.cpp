//------------------------clase hora----------------------------
#include<iostream>
using namespace std;

class horacio{
private:
   int hora,min,seg;
public:
   horacio(int,int,int);//constructor
   void agregarHora(int,int,int);
   void mostrarHora(void);
   void quitarHora(int,int,int);
};

int main(){
   horacio hora1(0,0,0);//lo inicializo gracias al constructor o instancia o objeto creado.
   hora1.mostrarHora();
   hora1.agregarHora(20,100,30);
   hora1.mostrarHora();
   hora1.agregarHora(1,62,63);
   hora1.mostrarHora();
   hora1.agregarHora(1,0,0);
   hora1.mostrarHora();
   return 0;
}


horacio::horacio(int a, int b, int c){
   hora=a;
   min=b;
   seg=c;
}
void horacio::mostrarHora(){
   cout<<"hora: "<<hora<<":"<<min<<":"<<seg<<endl;
}

void horacio::agregarHora(int a, int b, int c){
   if(c>=60){
      seg+=c%60;
      min+=c/60;
   }
   if(c<60)
      seg+=c;
   if(b>=60){
      min+=b%60;
      hora+=b/60;
   }
   if(b<60)
      min+=b;
   if (hora>=23)
      cout<<"exede el dia !!"<<endl;
   else
      hora+=a;
}
