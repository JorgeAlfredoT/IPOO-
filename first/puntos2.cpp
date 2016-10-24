//ahora funcionan como metodos las funciones dadas.
#include<iostream>
using namespace std;

class point{
public:
   int x,y;
   void sumarPunto(int px,int py){
      x+=px;
      y+=py;
   }
   void printPunto(){
      cout<<"("<<x<<","<<y<<")";
   }
};

class vector{
public:
   point start,end;
   void sumarVector1(int vstart, int vend){ //le suma a los componentes inicales y finales.
      start.x +=vstart;
      end.x += vstart;
      start.y += vend;
      end.y += vend;
   }
   void printVector1(){
      cout<<"("<<start.x<<","<<end.x<<") ----> ("<<start.y<<","<<end.y<<")"<<endl;
   }
   //llamaremos a la funciones dentro de una clase ..

   void sumarVector2(int vstart, int vend){
      start.sumarPunto(vstart, vend);
      end.sumarPunto( vstart, vend);
   }
   void printVector2(){
      start.printPunto();
      cout<<"----------->";
      end.printPunto();
      cout<<endl;
   }
};

int main(){

   point p1;
   p1.x=100;
   p1.y=200;
   p1.printPunto();
   cout<<endl;
   p1.sumarPunto(1,1);
   p1.printPunto();
   cout<<endl;
   p1.sumarPunto(2,2);
   p1.printPunto();
   cout<<"\n\n";

   vector v1,v2;
   v1.start.x=1000;
   v1.end.x=2000;
   v1.start.y=3000;
   v1.end.y=4000;
   v1.printVector1();
   v1.sumarVector1(1,2);
   v1.printVector1();
   v1.sumarVector1(10,20);
   v1.printVector1();
   cout<<"\n\n";

   v2.start.x=10;
   v2.end.x=20;
   v2.start.y=30;
   v2.end.y=40;
   v2.printVector2();


   return 0;
}
