#include<bits/stdc++.h>
using namespace std;

int main()
{
    

    string s1="Priyanshu";
     
   for(int i=0;i<=s1.size();i++)
    {
       int a=(int)s1[i]+1;
       s1[i]=(char)a;
    }
   
    
cout<<s1;
}