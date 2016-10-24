//caso switch
#include<iostream>
using namespace std;

void caracteristicaNumero(int n);
void termina();//termina cunado llega al 10. BREAK
void continua();


int main(){
   int e;
   //cout<<"Digite un numero de un solo digito"<<endl;
   //cout<<"Numero: "; cin>>e;
   //caracteristicaNumero(e);
   //termina();
   continua();

   return  0;
}

void caracteristicaNumero(int n){
   switch(n){
      case 0:
         cout<<"Numero Cero."<<endl;
         break;
      case 1:
      case 4:
      case 9:
         cout<<"Cudrado perfecto."<<endl;
         break;
      case 2:
      case 6:
      case 8:
         cout<<"Es un numero Par."<<endl;
         break;
      case 3:
      case 5:
      case 7:
         cout<<"Es un numero impar"<<endl;
         break;
      default:
         cout<<"solo numero de un solo digito¡¡¡"<<endl;
   }
}

void termina(){
   int e=0;
   while(true){
      if (e>10)
         break;
      cout<<++e<<endl;
   }
}

void continua(){
   int e=0;
   for(;e<=10;e++){
      if(e%2==0)
         continue;
      cout<<e<<endl;
   }
}
