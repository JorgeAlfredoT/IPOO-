#include<iostream>
using namespace std;

template <typename I, typename F>

F suma(I a, F b){
  return a+b;
}



int main(){

cout<<"suma con tipos deiferentes: "<<endl;
cout<<suma<int,float>(3,2.3)<<endl;;

  return 0;
}
