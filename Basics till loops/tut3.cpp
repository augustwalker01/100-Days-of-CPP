/*to print sum of first n numbers and to find factorial of n */
#include<iostream>
using namespace std;
int main()
{
int n,i=1,sum=1/*sum=1*/;
cout<<"enter n"<<endl;
cin>>n;
for ( i = 1; i <=n; i++)
{
    sum=sum*i;
    
}

/*while (i<=n)
{
    cout<<i<<endl;
    sum=sum+i;
    i++;
}
*/



cout<< "the sum is"<< sum;
return 0;
}
