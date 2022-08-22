#include<bits/stdc++.h>
using namespace std;
  int sum_digit(int n,int m){
       int sum=0;
       int sum1=0;
       while(n){
        sum =sum+n%10;
        n=n/10;
       }
       while(m){
        
        sum1=sum1+m%10;
        m=m/10;
       }
       int final_sum=sum+sum1;
       return final_sum;
    }
int main()
{
    int n,m;
    cin>>n>>m;
   cout<< sum_digit(n,m);
  
}