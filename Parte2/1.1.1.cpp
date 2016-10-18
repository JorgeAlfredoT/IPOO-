#include<iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

void printNtimes(char *,int);
void printNtimes2(char *,int);
void imprime(const int n);
void imprime2(const long &x);


int main(){
  char mensaje[]="rojinegros";
  char mensaje2[]="numeros";
  char mensaje3[]="rimense";
  printNtimes(mensaje,1);
  cout<<endl;
  printNtimes2(mensaje2,2);
  cout<<endl;
  imprime(7);
  long x=1234567890;
  imprime2(x);

  srand(time(0));
  short int numalet=rand()%10;
  short int numalet1=rand()%10+1;
  cout<<"Numero aleatorio: "<< numalet<<endl;
  cout<<"Numero aleatorio: "<< numalet1<<endl;

  return 0;
}


void printNtimes(char *msg, int n){
  int e=0;
  for( ; e<n ;e++)
    cout<<msg<<endl;
}

void printNtimes2(char *msg, int n=1){//actualizacion del n
  int e=0;
  for( ; e<n ;++e)
    cout<<msg<<endl;
}

void imprime(const int n){
  cout<<n<<endl;
}

void imprime2(const long &x){
  cout<<x<<endl;
}
