#include<iostream>
using namespace std;

class point{ // clase punto
public:
   int x,y; // atributos
};

class vector{//clase vector
public:
   point start,end;//atributos
};

void sumarPunto(point &,int,int);
void printPunto(point);
void sumarVector(vector &,int, int);
void printVector(vector);


int main(){

   point p;// p es una instancia del punto
   p.x=2;
   p.y=3;
   printPunto(p);
   sumarPunto(p,18,27);//sumar y mantener
   printPunto(p);//imprime dicho punto

   vector v1; // instancia o objeto de un vector
   v1.start.x=100;
   v1.end.x=200;
   v1.start.y=300;
   v1.end.y=400;
   printVector(v1);
   sumarVector(v1,50, 500);
   printVector(v1);
   return 0;
}

void sumarPunto(point &w,int x,int y){
   w.x +=x;
   w.y +=y;
}

void printPunto(point p){
   cout<<"("<<p.x<<","<<p.y<<")"<<endl;
}

void printVector(vector v){
   cout<<"("<<v.start.x<<","<<v.end.x<<")"<<"---> ("<<v.start.y<<","<<v.end.y<<")"<<endl;
}

void sumarVector(vector&t, int px, int py ){
   t.start.x += px;
   t.end.x += px;
   t.start.y += py;
   t.end.y += py;
}
