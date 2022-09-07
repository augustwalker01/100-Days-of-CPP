#include<iostream>
using namespace std;
int main(){
int n,temp=0;
cin>>n;
for(int i=0;i<=n;i++)
{
    temp++;
    cout<<temp;
    temp=i;
}

return 0;
}