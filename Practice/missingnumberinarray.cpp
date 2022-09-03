#include<bits/stdc++.h>
using namespace std;
int missing10(int arr[],int n)
{
    
    sort(arr,arr+n);
    for(int i=0;i<n;i++)
    {
        if(arr[i+1]!=arr[i]+1)
        {
            int k=arr[i]+1;
           return k;
        }
       

    }
}
int main(){
int a[5]={3,5,2,1,6};
cout<<missing10(a,5);
return 0;
}