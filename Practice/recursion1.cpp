#include<iostream>
using namespace std;
void natural(int n){
    natural(n+1);
    if(n==50){
        return 0;
    }
}
int main()
{
    cout<<natural(n=1);
}

