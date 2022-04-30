#include<iostream>
#include<math.h>
using namespace std;
int main(){
    int a, b,c;
cout<< "enter a";
cin>>a;
cout<< "enter b ";
cin>>b;
for (int i = 0; i < b; i++)
{
    c=pow(a,i);
   
     cout<<c<<"+";
}







return 0;
}