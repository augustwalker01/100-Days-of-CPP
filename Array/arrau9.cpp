#include<iostream>
using namespace std;
int main()
{
    int A[]={32,45,67,54},n=10,i,k;
   
    cout<<"Enter the number to search:"<<endl;
    cin>>k;
   for ( i = 0; i < n; i++)
   {
      if (k==A[i])
      {
        cout<<"The number has been found at:"<<i;
        return 0;
      } 
    }
    cout<<"Not found";
    return 0;
}