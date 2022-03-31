#include<iostream>
using namespace std;
float C,A;
float circum(float r,float pi)

{
C= 2*pi*r;
return C;

}
int main(){
    float C,A;
    float pi=3.14;
float r;
cin>>r;
cout<<circum (r,pi);

return 0;
}