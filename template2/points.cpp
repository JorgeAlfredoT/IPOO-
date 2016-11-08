#include<iostream>
#include "points.h"
#include<vector>
#include<set>
using namespace std;

/////////////////////////////////////////////////////////////////
//implementacion de metodos de point
template<typename T>
Points<T>::Points(T a, T b) : x(a), y(b){}

template<typename T>
void Points<T>::setX(const T newx){
   x=newx;
}

template<typename T>
void Points<T>::setY(const T newy){
   y=newy;
}

template<typename T>
T Points<T>::getX()const {
   return x;
}
template<typename T>
T Points<T>::getY()const{
   return y;
}
////////////////////////////////////////////////////////////////
//sobbrecarga de operadores

template <typename T>
Points<T> Points<T>::operator+(const Points p){
  Points cual;
  cual.x = x + p.x;  //x asume la x de la primer y p.x del argumento
  cual.y = y + p.y;   // "                                         "
  return cual;
}

template<typename T>
Points<T> Points<T>::operator-(const Points p){
   Points cual;
   cual.x = x - p.x;
   cual.y = y - p.y;
   return cual;
}



int main(){

  //  Points<int> p1(5,6);
  //  cout << p1 << endl;
   //
  //  Points<int> p2(3,7);
  //  cout << p2 << endl;
   //
  //  Points<int> myPunto[] = {p1, p2}, *p;
  //  p=myPunto;
  //  //cout<<p->getX()<<p->getY()<<endl<<endl;//5.1 6.1
   //
  //  Points<int> p3 = p1 + p2;
  //  cout<<p3<<endl;
  //  Points<int> p4 = p1 - p2;
  //  cout<<p4<<endl;

  temoplate<T>
  set<T> conjPoint;



  return 0;
}
