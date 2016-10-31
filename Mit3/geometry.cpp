#include <iostream>
#include"geometry.h"
using namespace std;

///////////////////////////////////////Point
Point::Point(int px, int py){
  this->x=px;
  this->y=py;
}
Point::~Point(){
  ;
}
void Point::setX(const int new_x){
  this->x=new_x;
}

void Point::setY(const int new_y){
  this->y=new_y;
}

int Point::getX(){
  cout<<x<<endl;
}

int Point::getY(){
  cout<<y<<endl;
}
void Point::printPoint(){
  cout<<"("<<x<<","<<y<<")"<<endl;
}
////////////////////////////////////PointArray
PointArray::PointArray(){
  this->size=0;
  this->data= new Point[size];
}
PointArray::~PointArray(){
  delete [] data;
}

PointArray::PointArray(PointArray &o){
  this->size=o.size;
  this->data=new Point[o.size];
}

PointArray::PointArray(const Point gg[],const int nuevo_size){
  this->size=nuevo_size;
  this->data= new Point[nuevo_size];
  int e=0;
  for(;e<nuevo_size;e++){
    this->data[e]=gg[e];
  }
}
void PointArray::printPointArray(){
  for(int e=0;e<size;e++){
    cout<<data[e]<<endl;
  }
}
//void PointArray::push_back(){;}








int main(){
  PointArray *pa;
  Point p1(1,1);
  Point p2(2,2);
  Point p3(3,3);
  Point lp[3]={p1,p2,p3};
  PointArray lpa(lp,3);
  //lpa.printPointArray();

  return 0;
}


//implemetar la clase vector y su correpondinete  array vector
