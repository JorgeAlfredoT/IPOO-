//conversiones_tipo
#include<iostream>
using namespace std;

void ifelse();//solo prueba.

int main(){
   int x=(int)5.0;
   cout<<"int: "<<sizeof(x)<<"bytes\t"<<x<<endl; //4bytes   5

   short s=3;
   cout<<"short: "<<sizeof(s)<<"bytes\t"<<s<<endl;

   long l= (long)s;
   cout<<"long: "<<sizeof(l)<<"bytes\t"<<l<<endl;

   float y=s+3.467;
   cout<<"float: "<<sizeof(y)<<"bytes\t"<<y<<endl;

   double d=23.123456789;
   cout<<"double: "<<sizeof(d)<<"bytes\t"<<d<<endl;

   char a='w';
   cout<<"char: "<<sizeof(a)<<"bytes\t"<<a<<endl;

   string b="numeros";
   cout<<"string: "<<sizeof(b)<<"bytes\t"<<b<<endl;

   ifelse();

   return 0;
}

void ifelse(){
   int a=3,b=4,c;
   c = a > b ? 100 : 200;
   cout<<c<<endl;
}
