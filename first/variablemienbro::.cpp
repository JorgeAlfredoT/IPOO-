//clase::x=xi
#include<iostream>
using namespace std;

class moneda{
   int m;
public:
   moneda(){m=0;}
   void setm(int ag){moneda::m=ag;}
   void getm(){cout<<m<<endl;}// getm inprime
};

/*void moneda::setm(int ag){
   moneda::m=ag;//distinguir rntre el
               //parametro m del mienbro
               //m de la clase.
}*/


int main(){
   moneda m1;
   m1.getm();

   m1.setm(5);
   m1.getm();
   m1.setm(523);
   m1.getm();
   return 0;
}
