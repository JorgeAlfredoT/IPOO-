#include<iostream>
#include<cmath>
#define PI 3.14159

using namespace std;


//clase point
class point{
public:
   float x,y;
   point(){x=0.0 ;y=0.0;};
   point(float px, float py){x=px; y=py;}
   point(point & pc){x=pc.x; y=pc.y;}
   void setAddp(float px,float py){x +=px; y +=py;}
   void printPoint(){cout<<"("<<x<<","<<y<<")";}
   void getX(){cout<<x<<endl;}
   void getY(){cout<<y<<endl;}
};

//////////////////////////////////////////////////////////////////////////////////////////////
class cuadrado{
public:
   point start,end;
   cuadrado(float sx, float sy, float ex, float ey){start.x=sx; start.y=sy; end.x=ex ;end.y=ey;}
   void setAddc(float,float);
   void infocuadrado();
   void mostrar();
};

//desarrolo de los metodos de cuadrado.
void cuadrado::setAddc(float ax, float ay){
   start.setAddp(ax,ay);
   end.setAddp(ax,ay);
}

void cuadrado::infocuadrado(){
   float r=sqrt( pow((end.y - start.y),2) + pow((end.x - start.x),2) );
   cout<<"lado: "<<r<<endl;
   cout<<"area: "<<r*r<<endl;
   cout<<"perimetro: "<<4*r<<endl;
}

void cuadrado::mostrar(){
   start.printPoint();
   cout<<"--->";
   end.printPoint();
   cout<<endl<<endl;
}
/////////////////////////////////////////////////////////////////////////////////////////////

class triangulo{
public:
   point start,end;
   triangulo(float sx, float sy, float ex, float ey){start.x=sx; start.y=sy; end.x=ex ;end.y=ey;}
   void setAddt(float,float);
   void infotriangulo();
   void mostrar();
};
//desarrolo de la clase de triangulo.
void triangulo::setAddt(float ax, float ay){
   start.setAddp(ax,ay);
   end.setAddp(ax,ay);
}

void triangulo::mostrar(){
   start.printPoint();
   cout<<"--->";
   end.printPoint();
   cout<<endl<<endl;
}

void triangulo::infotriangulo(){
   float r=sqrt( pow((end.y - start.y),2) + pow((end.x - start.x),2) );
   cout<<"lado: "<<r<<endl;
   cout<<"area: "<<r*r*sqrt(3)<<endl;
   cout<<"perimetro: "<<3*r<<endl;
}
//////////////////////////////////////////////////////////////////////////////////////////////
class circulo{
public:
   float radio;
   circulo(int rx){radio=rx;}
   void mostrarRadio(){cout<<radio<<endl;}
   void infocirculo();
};
//desarrllo de la clase circulo.
void circulo::infocirculo(){
   cout<<"longitud: "<<2*PI*radio<<endl;
   cout<<"Area: "<<PI * radio*radio<<endl;
}
////////////////////////////////////////////////////////////////////////////////////////////

class rectangulo{
public:
   point start,end;
   rectangulo(int sx, int sy, int ex, int ey ){start.x=sx; start.y=sy; end.x=ex;end.y=ey;}
   void mostrarR(){cout<<"("<<start.x<<","<<start.y<<")-->("<<end.x<<","<<end.y<<")"<<endl;}
   void infoRectangulo();
};
//desarrolo de la clase rectangulo.
void rectangulo::infoRectangulo(){
   float lar,anc;
   //float aux_ex=end.x;
   //float aux_ey=start.y;

   //float aux2_ex=start.x;
   //float aux2_ey= end.y;
   lar=sqrt( pow( (start.y-start.y) ,2) + pow( (end.x-start.x ) ,2));
   anc=sqrt( pow( ( end.y-start.y) ,2) + pow( ( start.y-start.x) ,2) );
   cout<<"El area es: "<<lar*anc<<endl;
   cout<<"EL perimetro es: "<<2*(lar+anc)<<endl;

}

int main(){
   //todos empiezan con un punto(a,b)
   cout<<"------------derivaciones solo para figuras regulares------------."<<endl<<endl;
   cout<<"cuadrado"<<endl;
   cuadrado c1(1,2,3,4);
   c1.infocuadrado();
   cout<<"\n\n";

   cout<<"triangulo: "<<endl;
   triangulo t1(10,20,30,40);
   t1.infotriangulo();
   cout<<"\n\n";

   cout<<"circulo"<<endl;
   circulo ci1(10);
   ci1.mostrarRadio();
   ci1.infocirculo();
   cout<<"\n\n";

   cout<<"               (*,*)-------------(c,d) "<<endl;
   cout<<"                   |              |"<<endl;
   cout<<"                   |              |"<<endl;
   cout<<"rectangul0:    (a,b)-------------(*,*)"<<endl;

   rectangulo rec1(1,2,3,4);
   rec1.mostrarR();
   rec1.infoRectangulo();

   return 0;
}
