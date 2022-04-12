//write a program to write multiplication table of 15 using recursive function.

#include<iostream>
using namespace std;

int mult(int n,int i=1)
{
    if (i<10)
    {
        return n*mult(i+1);
    }
}
int main(){
int n, i;
cout<<"enter n"
<<endl;
cin>>n;
cout<<"enter i";
cin>>i;
cout<<mult(n,i)<<endl;
return 0;
}