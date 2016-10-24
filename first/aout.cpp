#include<iostream>
using namespace std;


int main(){
   int fin=0;
   int e=1;
   while(!fin){
      e+=e;
      if (e==16)
         fin=1;
      cout<<e<<endl;
   }
   return 0;
}
