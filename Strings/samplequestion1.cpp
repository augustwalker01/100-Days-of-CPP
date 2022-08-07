#include<bits/stdc++.h>
using namespace std;
int main()
{
    int i,j;
    for(int i=1;i<=5; i++)
    {
        for(int j=5;j>=i;j--)
        {
            cout<<j;
        }
        cout<<endl;
    }
}