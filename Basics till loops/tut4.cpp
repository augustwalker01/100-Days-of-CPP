//Program to find a factor
#include<iostream>
using namespace std;
int main()
{
int i,n;
cout<<"enter n";
cin>>n;
for ( i = 1; i <=n; i++)
{
    //here this if statement is also in a loop , so it will iterate as many times the loop insist it to do
    if (n%i==0)
    {
        cout<< i <<endl;
    }
        
}

return 0;

}


