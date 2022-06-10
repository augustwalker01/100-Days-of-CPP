//for taking elemnts from user and printing them (array)
#include<iostream>
using namespace std;
int main()
{
   int A[4];
   cout<<"enter the elements"<<endl;
   for (int i = 0; i < 4; i++)
   {
       cin>>A[i];
   }
   for ( int j = 0; j< 4; j++)
   {
   cout<<A[j]<<endl;
   }
   
    return 0;
}