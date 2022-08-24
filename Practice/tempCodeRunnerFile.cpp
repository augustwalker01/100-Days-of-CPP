#include<bits/stdc++.h>//when modulo is also given
using namespace std;
int main(){
const int M=1e9+7;
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    int fact=1;
    for(int i=0;i<=n;i++)
    {
(fact=fact*i)%M;
    }
    cout<<fact;
}