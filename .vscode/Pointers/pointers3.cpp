#include<iostream>
using namespace std;
//Write a program to print a number which is entered from keyboard using pointer.
int main(){
int x;
cout<<"enter the integer"<<endl;
cin>>x;
int *P;
P=&x;
cout<< " the number entered is"<<endl;
cout<< *(&x);





return 0;
}