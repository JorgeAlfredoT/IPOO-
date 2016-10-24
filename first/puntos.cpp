#include<iostream>
using namespace std;

class punto{
private:
   int x,y;
public:
   punto(int,int);//constructor
   int entrarX();
   int entrarY();
   void mostrarPunto();
};


class vector{
private:
   punto start, finish;
public:
   vector(int,int);
   void mostrarVector(punto,punto);

};
int main(){
   //punto p1(3,4);
   //p1.mostrarPunto();
   //cout<<p1.entrarX()cd <<endl;
   //cout<<p1.entrarY()<<endl;

   return 0;
}

punto::punto(int a, int b){
   x=a;
   y=b;
}

int punto::entrarX(){
   return x;
}
int punto::entrarY(){
   return y;
}

void punto::mostrarPunto(){
   cout<<"("<<x<<","<<y<<")"<<endl;
}

vector::vector(int a, int b){
   start=a;
   finish=b;
}
