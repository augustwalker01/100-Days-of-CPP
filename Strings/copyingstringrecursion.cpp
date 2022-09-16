#include<bits/stdc++.h>
using namespace std;
void qcopy(char str1[],char str2[],int i=0)
{
    str2[i]=str1[i];
    if(str1[i]=='\0'){
     return;
    }
    qcopy( str1,str2,i+1);
}
int main(){
char s1[100]="Messi";
char s2[100]="Neymar";
qcopy(s1,s2);
cout<<s2;
return 0;
}