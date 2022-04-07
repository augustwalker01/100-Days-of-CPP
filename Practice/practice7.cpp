//program in C++ which accepts the user's first and last name 
//and print them in reverse order with a space between them.
#include<iostream>
using namespace std;
int main(){
char fname[10],lname[10];
cout<<"enter first name "<<endl;
cin>>fname;
cout<<"enter second name "<<endl;
cin>>lname;
cout<<lname<<" "<<fname;

return 0;
}