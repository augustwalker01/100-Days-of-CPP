#include <iostream>
using namespace std;
int main()
{
  int A[10],i,k;
  cout<<"Enter numbers";
 for ( i = 0; i <10; i++)
 {
   cin>>A[i];
 }
 cout<< "eNTER KEY";
 cin>>k;
 for ( i = 0; i <10; i++)
 {
  if (k==A[i])
  {
   cout<<"Number found at"<<i;
   return 0;
  }
 }
   cout<< "not found";
 return 0;
 
  
}