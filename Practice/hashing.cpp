#include<iostream>
using namespace std;
const int N=1e7+10;
int hsh[N];
int main(){
    int n;
    cout<<"enter size"<<endl;
cin>>n;

int A[n];
cout<<"enter elements"<<endl;
for(int  i=0;i<n;i++){
    cin>>A[i];
    hsh[A[i]]++;
}



cout<<"enter queries"<<endl;
int q;
cin>>q;
while(q--)
{
    cout<<"enter element"<<endl;
int k;
cin>>k;
cout<<hsh[k]<<endl;
}

  
return 0;
}