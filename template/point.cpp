#include<iostream>
using namespace std;

template<typename I>

class Point{
private:
  I x,y;
public:
  Point(I a=0, I b=0): x(a), y(b){}
  ~Point(){}
  I getX()const {return x;}
  I getY()const {return y;}

};

int main(){

  Point<float>p1(2.4,3.2),*p;
  p=&p1;
  cout<<p->getX()<<" "<<p->getY()<<endl;

  return 0;
}
