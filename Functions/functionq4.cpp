#include<iostream>
using namespace std;
const int size =3;
int i,j;
int A[size],B[size], C[size];
int sum(int A[],int B[])
{
    for ( int count = 0; count <= size; count++)
    {
        int C[i]= { A[i] + B[i]};
    }
    for (int count  = 0;  count<=size ; count++)
    {
        cout<<C
    }
    
    cout<<"the sum is"<<endl;
    return C[i];
   
   
}

int main(){
    cout<< "enter the elements of the array"<<endl;
    for (int i = 0; i <= size; i++)
    {

       cin>>A[i];
       
    }
    cout<<"enter the elements of 2nd array"<<endl;
    for (int i = 0; i <= size; i++)
    {
      cin>>B[i];
    }
    cout<<sum(A,B);
   
    
    
    

return 0;
}