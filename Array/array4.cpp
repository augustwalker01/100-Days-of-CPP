#include<iostream>
using namespace std;
int main()

{
    int A[4]={6,3,4},sum=0;
    for (int i=0;i<=2;i++)
    {
        sum=sum+A[i];
    }
    cout<<sum;
    return 0;
}