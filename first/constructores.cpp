#include<iostream>
#include<cstring>
using namespace std;

class prueba{
   int tam;
   int *vector;
public:
   prueba(int);
   void mostrardato();
   ~prueba();
};

int main(){
   prueba pr1(98);
   //pr1.mostrardato();
   pr1.~prueba();

   return 0;
}

prueba::prueba(int x){
   tam=x;
}
void prueba::mostrardato(){
   cout<<tam<<endl;
}

prueba::~prueba(){
   cout<<"Este objeto se ha muerto..."<<endl;
}
