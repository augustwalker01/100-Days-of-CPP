#include <iostream>
using namespace std;
int main()
{
  int A[10],n=10,i,k;
  cout<<"Enter numbers";
 for ( i = 0; i <n; i++)
 {
   cin>>A[i];
 }
 cout<< "eNTER KEY";
 cin>>k;
 for ( i = 0; i <n; i++)
 {
  if (k==A[i])
  {
   cout<<"Number found"<<i;
   return 0;
  }
 }
   cout<< "not found";
 return 0;
 
  
}