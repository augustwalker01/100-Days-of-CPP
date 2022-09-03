/*#include<iostream>
using namespace std;
int main(){
int n=5;
int m=3;
int k,j=0,i,ct=1;
int A[n]={3,2,3,4,5,6};
int B[m]={1,2,3,8};
for( i=0;i<n;i++){
    k=A[i];
    while(j<m)
    {
        if(k==B[j]){
ct--;
j++;
        }
else
ct++;
    }
}
cout<<ct;

return 0;
}*/
#include<bits/stdc++.h>
using namespace std;
void sorted_merge(int a[],int b[],int c[],int m,int n)
{
 int i = 0, j = 0, k = 0;  
    while (i < n) { // iterate in first array  
        c[k] = a[i]; // put each element in res array  
        i++;  
        k++;

}
while (j < m) { // iterate in the second array  
        c[k] = b[j]; // put each element in res array  
        j += 1;  
        k += 1;  
    }  
    sort(c,c+n+m);
}
int main(){
    int a[]={2,3,4,3,5,3};
    int b[]={6,4,3,5,2};
    int n=sizeof(a)/sizeof(a[0]);
    int m= sizeof(b)/sizeof(b[0]);
    int c[m+n];
    sorted_merge(a,b,c,m,n);
cout<<"sorted array will be";
for(int i=0;i<n+m;i++)
{
    cout<<" "<<c[i];
    cout<<endl;
}

return 0;
}