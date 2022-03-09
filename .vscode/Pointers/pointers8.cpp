#include<iostream>
using namespace std;
int main(){
int x,y;
int*p=&x;
int*q=&y;
cout<<"enter the two numbers"<<endl;
cin>>*p>>*q;
if (*p>*q)
{
    cout<<*p;
}
else
{
    cout<<*q;
}

return 0;
}