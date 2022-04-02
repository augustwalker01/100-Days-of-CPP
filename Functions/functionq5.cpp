//Factorial using recursion

#include<iostream>
using namespace std;
int n,result,sum=1;
int factorial(int n)
{
if (n>1)
{
    return n*factorial(n-1);
}

else{
return 1;
}


}
int main(){
    cout<<"Enter a number"<<endl;
    cin>>n;
    result=factorial(n);
    cout<<"the result is "<< result;


return 0;
}