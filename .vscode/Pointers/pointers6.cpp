#include<iostream>
using namespace std;
int main(){
const int size=6;
int i,A[size];
cout<< "enter the elements"<<endl;
for(int i=0;i<size;i++)

{

cin>>A[i];
}
int *p=&A[5];

cout<<&p-2;


return 0;
}