#include<iostream>
#include<cstring>
using namespace std;

class MisEstudiantes{
public:
   int ID;
   char name[10];
   MisEstudiantes(){
      ID=8;
      strcpy(name,"lulu");
   }
   void mostrarDatos(){
      cout<<ID<<name<<endl;
   }
};


int main(){
   MisEstudiantes e1,e2;
   cout<<e1.name<<endl;
   cout<<e1.ID<<endl;
   e2=e1;
   e2.name[0]='w';
   cout<<e2.name<<endl;
   cout<<e1.name<<endl;

   return 0;
}
