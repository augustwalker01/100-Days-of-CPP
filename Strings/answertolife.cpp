// #include<bits/stdc++.h>
// using namespace std;
// int main(){
// int n,i=0,A[99];
// for(i=0;i<=99;i++)
// {
//     if(n!=42){
// cin>>n;
// n=A[i];
//     }
// else
// break;

// }
// while(A[i]!=42)
// {
//     cout<<A[i]<<endl;
// }

// return 0;
// }
#include<iostream>
using namespace std;
int main(){
int n,r,sum=0;
cin>>n;
while(n!=0){
r=n%10;
n=n/10;
sum+=r;
}
cout<<sum;

return 0;
}