#include<iostream>
using namespace std;
int n,r;
int powe(int n)
{
if(n==0){
return 1;
}
r=powe(n-1)*2;
return r;
}
int main(){
  cout<< powe(5);

return 0;
}