//gcd of two numbers
#include <iostream>
using namespace std;
int main()
{
    int m,n,lcm;
    cout<<"Enter m"<< endl;
    cin>> m ;
    cout<< " Enter n"<< endl;
    cin>> n;
    while (m!=n)
    {
        
    
    
    if (m>n)
    {
        m=m-n;
    }
    else if (m<n)
    {
        n=n-m;
    }
   
    
        
    }
    lcm=(m*n)/m;
    cout<<lcm;

    return 0;
}