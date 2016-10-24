//hello rojinegro
#include<iostream>
using namespace std;

void saludo1(char *);
void saludofor(char *, int);
void saludowhile(char *, int);
void saludoDowhile(char *, int);

int main(){
   char r[]="hello rojinegros";
   saludo1(r);
   cout<<"\n\n";
   saludofor(r,3);
   cout<<"\n\n";
   saludowhile(r,4);
   cout<<"\n\n";
   saludoDowhile(r,5);

   return 0;
}

void saludo1(char *l){
   cout<<l<<endl;
}

void saludofor(char *l,int n){
   int e=0;
   if(n>0){
      for(;e++<n;)
         cout<<l<<endl;
   }
   else
      cout<<"NUMERO POS.."<<endl;
}

void saludowhile(char *l, int n){
   int e=0;
   if (n>0){
      while(e++<n)
         cout<<l<<endl;
   }
   else
      cout<<"NUMERO POS..."<<endl;
}

void saludoDowhile(char *l, int n){
   if(n>0){
      int e=1;
      do{
         cout<<l<<endl;
      }
      while(e++<n);
   }
   else
      cout<<"NUMERO POS...."<<endl;
}
