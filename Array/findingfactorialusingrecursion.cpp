#include<iostream>
using namespace std;
int fact(int n)
{
    if(n>1){
        n=n*fact(n-1);
        return n;
    }
    return 1;
}
int main(){
    int n = 5;
    // cin>>n;
    cout << fact(n);

return 0;
}