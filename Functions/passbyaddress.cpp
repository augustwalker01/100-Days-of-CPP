#include<iostream>
using namespace std;
void swap(int *a, int *b)
{
    cout<<*a<<" "<<*b;
    int temp;
    temp=*a;
    *a=*b;
    *b=temp;
    cout<<*a<<*b;
}
int main(){
int x=23;int y=34;
swap(&x,&y);
cout<<x<<" "<<y;


return 0;
}