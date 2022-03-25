#include<iostream>
using namespace std;
int main(){
    
    int i;
    int A[]={34,67,54,89,76};
    int *p=A;
    for(int i=0;i<5;i++)
    {
        p++;
        cout<<p<<endl;
        

    }
    
return 0;
}