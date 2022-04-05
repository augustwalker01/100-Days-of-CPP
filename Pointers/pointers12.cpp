#include<iostream>
using namespace std;
int main(){
int n,x=1;
int *p=&n;
cout<< " enter number"<<endl;
cin>>n;
for (int i = 1; i <=*p; i++)
{
    x=x*i;
}
cout<<"The factorial for the number "<<*p <<" is "<<x;


return 0;
}