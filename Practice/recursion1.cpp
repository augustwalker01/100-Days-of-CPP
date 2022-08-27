#include<iostream>
using namespace std;
int  fact(int n){
    
    if(n==0){
   return 1;
  
    }
    int r;
     r=n* fact(n-1);
   return r;
}
int main(){
cout<<fact(4);
return 0;
}