#include<iostream>
using namespace std;
int main(){
    int size,i,sum=0;
     cout<<"enter size";
    cin>>size;
    int A[size]={2,3,4,5,6};
   
    for ( i = 0; i <size ; i+=2)
    {
      sum=sum+A[i];
    }
  

cout<<sum;

return 0;
}