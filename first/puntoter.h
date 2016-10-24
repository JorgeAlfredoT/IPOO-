//clases y prototipos de los metodos, que seran desarrollados en un cpp
class punto{
public:
   int x,y;
   punto(punto &i);
   punto();
   punto(int,int);
   void sumarPunto(int,int);
   void printPunto();
};

class vector{
public:
   punto start,end;
   vector();
   vector(int, int,int,int);
   void sumarVector(int, int);
   void printVector();
};
