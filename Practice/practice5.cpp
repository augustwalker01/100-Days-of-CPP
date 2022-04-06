
//Write a program in C++ to swap two numbers
#include<iostream>
using namespace std;
void swap(int a,int b)
{
    int temp;
    temp=a;
    a=b;
    b=temp;
cout<<a<<b;
}
int main(){
    int a,b;
cout<<"enter a and b "<<endl;
cin>>a>>b;
swap(a,b);
cout<<a<<b;
return 0;
}