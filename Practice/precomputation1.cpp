 #include<bits/stdc++.h>//when modulo is also given
//without precomputation
using namespace std;

/*int main(){

const int M=1e9+7;
int t;
cin>>t;
while(t--){
    int n ;
    cin>>n;
    int fact=1;
    for(int i=1;i<=n;i++)
    {
(fact=fact*i)%M;
    }
    cout<<fact;
}
}*/
//with precomputation
const int N=1e5+10;
long long int fact[N];
int main(){
    fact[0]=fact[1]=1;
    for(int i=2;i<N;i++){
        fact[i]=fact[i-1]*i;
    }
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        cout<<fact[n];
    }
}