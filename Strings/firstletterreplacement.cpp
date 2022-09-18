#include<bits/stdc++.h>
using namespace std;

int main()
{
    

    char s1[100]="Priyanshu";
     
   for(int i=0;i<=100;i++)
    {
       int a=(int)s1[i]+1;
       s1[i]=(char)a;
    }
   
    
cout<<s1;
}