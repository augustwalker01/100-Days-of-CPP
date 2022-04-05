//a program in C++ to display various type or arithmetic operation using mixed data type , function overloading.
#include<iostream>
using namespace std;
float sum(float a,float b)
{
    return a+b;
}
int sum(int a,int b)
{
    return a+b;
}

int main(){
    float a,b;

    cout<<"Enter a and b"<<endl;
    cin>>a>>b;
cout<<sum(a,b);
return 0;
}