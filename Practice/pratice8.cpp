// Write a program in C++ to calculate area of an equilateral triangle.
#include<iostream>
#include<math.h>
using namespace std;
int main(){
  double  a,A;
    cout<<"enter side"<<endl;
    cin>>a;
    A=sqrt(3)/4*a*a;
    cout<<A<<endl;

return 0;
}