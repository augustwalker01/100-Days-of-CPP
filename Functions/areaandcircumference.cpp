#include<iostream>
using namespace std;
float A,C,r,pi=3.14;
float circum (float r, float pi )
{
    C=2*pi*r;
    return C;
}
int main(){
    
cout<< "Enter radius" <<endl;
cin>>r;
cout<< "thr circumference is " << circum(r,pi) ;


return 0;
}