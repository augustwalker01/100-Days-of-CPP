#include<iostream>
using namespace std;

int main(){
    int N=7;
    int A[N]={2,5,2,-5,-4,3,-6};

    int B[N];
    int j=0;
    for(int i=0;i<N;i++)
    {
        if(A[i]>0)
        {
            B[j]=A[i];
            j++;
        }
    }
    for(int i=0;i<N;i++)
    {
        if(A[i]<0)
        {
            B[j++]=A[i];
          
        }
    }
    for(int k=0;k<N;k++)
    {
        cout<<B[k]<<" ";
    }

return 0;
}