#include<iostream>
using namespace std;
int main(){
    int x;
int arr[10]={1,1,2,2,2,2,2,4,4,5};
cout<<"enter the element"<<endl;
cin>>x;
for ( int i = 0; i <= 9; i++)
{
   if (arr[i]==x)
   {
       cout<<"The first index is"<<i;
       if (arr[i]==x)
       {
           cout<<"the second index is "<<i;
       }
      
       
   }
   else
   {
       cout<<"not found"<<endl;
   }
}


return 0;
}