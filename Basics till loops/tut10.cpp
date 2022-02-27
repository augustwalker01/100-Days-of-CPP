//reversing a number
#include <iostream>
using namespace std;
int main()
{
    int m,n,r,R=0;
    cout<<"enter a number"<<endl;
    cin>>n;
    m=n;
    while (n>0)
    {
        r=n%10;
        n=n/10;
        R=R*10+r;
    }
    

cout<<R;
if (R==m)
{
    cout<<"palindrome"<<endl;

}

else
{
    cout<<"not palindrome";
}

return 0;
}