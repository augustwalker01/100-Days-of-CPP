#include<iostream>
using namespace std;
int main(){
//a program to print the address of the pointer to a variable whose value is input from user.
int x;
int *P=&x;

cin>>x;
cout<<&P;
return 0;
}