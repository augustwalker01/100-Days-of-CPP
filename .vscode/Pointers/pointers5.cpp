#include<iostream>
using namespace std;
int main(){
int A[]={3,2,7,8,9};
int *p=A;
int *q=&A[3];
cout<<q-p<<endl;
return 0;
}