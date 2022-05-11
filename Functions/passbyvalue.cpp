#include<iostream>
using namespace std;
void swap (int a , int b )
{
    cout<< a<<" "<<b;
    int temp =a;
    a=b;
    b=temp;
    cout<<a<<" "<<b;
}

int main(){
    int x=15, y=30;
    swap(x,y);
cout<<x <<y;

return 0;
}