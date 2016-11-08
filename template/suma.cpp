#include<iostream>
using namespace std;

template <typename T>
//template <typename I, class F>
T suma(T a, T b){
    return a+b;
}

// F suma2(I a, F b){
//   return a+b;
// }

int main(){

cout<<"suma con tipos unicos"<<endl;
cout<<suma<int>(3,4)<<endl;
cout<<suma<float>(2.66,1.444)<<endl;

// cout<<"suma con tipos diferentes"<<endl;
// cout<<suma2<int,float>(3,4.23)<<endl;

  return 0;
}
