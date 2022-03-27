#include<iostream>
using namespace std;
int main(){
int m,e,sum=0;
cout<<" how many elements are there?"<<endl;
cin>>e;
cout<<" Enter the numbers for calculating mean"<<endl;
for(int i=1;i<=e;i++)
{
    cin>>m;
    sum+=m;
}
int mean= sum/e;
cout<<mean;

return 0;
}