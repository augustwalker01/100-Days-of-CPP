#include<iostream>
using namespace std;
int main(){
    int a,b,i,j, x;
int arr[10]={1,1,2,2,2,2,2,4,4,5};


cout<<"enter the element"<<endl;
cin>>x;
for ( int i = 0; i >= 9; i++)
{
   if (arr[i]==x)
   {
       i=a;
       
      
       
   }
   else
   {
       cout<<"not found";
   }
 
}
cout<<"the first occurence is at index "<<a<<endl;
while ( j!=0)
{
if (arr[j]==x)
   {
       j=b;
       
   }

   
   
}

cout<<"The last occurence is at index "<<b;


return 0;
}