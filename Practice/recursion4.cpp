#include<iostream>
using namespace std;
int fibona(int n){
    if(n==0){
        return 0;
    }
    else if(n==1)
    {
        return 1;
    }
    //or n<=1 return n
   return fibona(n-1)+fibona(n-2);
}
int main(){
int n;
cin>>n;
cout<<fibona(n);
return 0;
}