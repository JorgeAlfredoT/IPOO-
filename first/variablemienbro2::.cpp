/el uso de clase::x=xi.
#include<iostream>
using namespace std;

//una coordenada
class suma{
private:
   int x,y;
public:
   suma(){x=0;y=0;}
   suma(int xi,int yi){suma::x=xi;suma::y=yi;}
   void sumar(int xc, int yc){x+=xc; y += yc;}
   void mostrar(){cout<<"("<<x<<","<<y<<")"<<endl;}
};

int main(){
   suma si;
   si.mostrar();
   si.sumar(2,3);
   si.mostrar();
   si.sumar(100,200);
   si.mostrar();

   return 0;
}
