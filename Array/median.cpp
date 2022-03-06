#include<iostream>
using namespace std;
int main(){
    int i;
    const int size=5;
    int A[size];
cout<<" Enter the elements of the array"<<endl;
for(int i=0;i<size;i++)
{
cin>>A[i];
}


for (int j = 0; j< size; j++)
{
   cout<< A[j]<< endl;
}

return 0;
}