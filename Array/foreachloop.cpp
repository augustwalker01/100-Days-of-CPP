#include<iostream>
using namespace std;
int main(){
int sum=0, x, A[5]={3,6,8,10,23};
for ( auto x:A)
{
    sum=sum+x;
    
}
cout<< sum ;
return 0;
}