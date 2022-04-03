//find the sum of given numbers using recursion
#include<iostream>
using namespace std;
int n;
int sum(int n)
{
  if (n!=0)
  {
    return n+sum(n-1);
  }
}
int main(){
    cout<< "enter a number"<<endl;
    cin>> n;
cout<<sum(n);
return 0;
}