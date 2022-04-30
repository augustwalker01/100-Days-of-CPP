#include<iostream>
using namespace std;
int main(){
    int i,size,sum=0;
    cout<< "enter size";
    cin>>size;
    int A[size]={3,5,4,6,4};
    for ( i = 0; i < size; i++)
    {
       if (A[i]%2==0)
       {
          sum=sum+A[i];
       }
       
    }
    cout<<sum;

return 0;
}