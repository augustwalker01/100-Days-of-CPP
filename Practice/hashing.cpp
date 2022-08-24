#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"enter size"<<endl;
cin>>n;
int A[n];
cout<<"enter elements"<<endl;

cin>>A[n];

cout<<"enter queries"<<endl;
int q;
cin>>q;
while(q--)
{
    cout<<"enter element"<<endl;
int k;
cin>>k;
int ct=0;
for(int i=0;i<n;++i){
    if(A[i]=k){
        ct++;
    }
}
cout<<ct<<endl;
}   
return 0;
}