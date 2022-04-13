//Write a program to find the largest three of the array
#include<iostream>
using namespace std;
int main(){
    int size ,i,x=0;
int A[size];

cout<<"Enter size "<<endl;
cin >>size;


cout<<"enter the elements"<<endl;
for ( i = 0; i < size; i++)
{
    cin>>A[size];
}
x=A[0];
for ( i = 0; i <=size; i++)
{
   if (A[i]>x)
   {
     x=A[i];
   }
   
}
cout<<"the largest of the array is "<<x;

return 0;
}