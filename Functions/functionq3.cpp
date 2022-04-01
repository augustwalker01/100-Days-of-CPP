#include<iostream>
using namespace std;
int n,i,count=0;
bool check(int n)
{
    for ( i = 1; i <=n; i++)
    {
       if(n%i==0)
       {
           count++;
       }
    }
    if (count>2)
    {
        return true;


    }
    else
    {
      return false;
    }

    
    
    
}
int main(){
cout<<"Enter the numbers"<<endl;
cin>> n;

cout<<check( n);
return 0;
}