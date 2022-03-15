#include<iostream>
#include<math.h>
using namespace std;

int main(){
    int base, power,exp;
    
cout<<"Enter the numbers";
cin>>base>>power;
exp=pow(base,power);
cout<<"The result will be"<<exp;

return 0;
}