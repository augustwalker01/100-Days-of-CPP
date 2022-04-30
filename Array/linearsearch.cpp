#include<iostream>
using namespace std;
int main(){
   int i,x,size=8;
int A[size]={3,2,9,6,8,5,6};
cout<<"enter the element";
cin>>x;
for ( i = 0; i <x ; i++)
{
   if (A[i]==x)
   {
       cout<<"tHE NUMBER IS FOUND AT INDEX "<<i;
   }
   
}



return 0;
}