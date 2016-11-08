#include<iostream>
#ifndef POINTS_H
#define POINTS_H
//#include<istream>
//#include<ostream>
using namespace std;
//////////////////////////////////////////////////////////

template<typename T>

class Points{
private:
   T x,y;
public:
   Points(): x(0), y(0){}
   Points(T a, T b);
   ~Points(){}
   Points(const Points &o): x(o.x), y(o.y) {}
   void setX(const T);
   void setY(const T);
   T getX()const;
   T getY()const;

   //sobrecarga de operadores
   Points operator+(const Points<T> p);
   Points operator-(const Points<T>);

   friend ostream&  operator <<(ostream& o, const Points<T> p){
     o<<"("<<p.x<<","<<p.y<<")";
     return o;
   }
   friend istream&  operator >>(istream& i,  Points<T> pi){
     i>>pi.x>>pi.y;
     return i;
   }
};



#endif
