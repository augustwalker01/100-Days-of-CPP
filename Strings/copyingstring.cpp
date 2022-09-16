//Iterative method
#include<bits/stdc++.h>
using namespace std;
void copy(char s1[],char s2[])
{
    int i=0;
    for( i=0;s1[i]!='\0';i++)
    {
        s2[i]=s1[i];
        
    }
    s2[i]='\0';
}
int main(){
/*string str1,str2;
cin>>str1;
cin>>str2;
*/
char s1[100]="Ronaldo";
char s2[100]="messi";
copy(s1,s2);
cout<<s2;
return 0;
}