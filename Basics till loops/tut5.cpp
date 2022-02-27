// A program to print the sum of factors and check whether the number is perfect or not  
#include<iostream>
using namespace std;
int main()
{
    int j,i,sum=0;
    
    
for ( i = 1; i <=500; i++)
{
    /* code */


for ( j = 2; j <=i; j++)

{
    
    if (j%i==0)
    {
       
        sum=sum+j;
        
    }
    



    
}


if (sum==2*i)
{
    cout<<i<< endl;
}


}




return 0;
}
