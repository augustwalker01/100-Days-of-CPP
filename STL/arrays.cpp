#include<iostream>
#include<array>
using namespace std;
int main()
{
 array<int,4>a={4,6,-1,7};
 int size=a.size();
 cout<<size;
 for(int i:a){
    cout<<i<<" ";
 }
 cout<<a.at(2)<<endl;
 cout<<a.empty()<<endl;
 cout<<a.front()<<endl;
 cout<<a.back()<<endl;
}