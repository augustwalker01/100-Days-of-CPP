#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v;
    cout<<v.capacity()<<endl;
    v.push_back(1);
    cout<<v.capacity()<<endl;
    v.push_back(2);
    cout<<v.capacity()<<endl;
    v.push_back(3);
    cout<<v.capacity()<<endl;
    cout<<v.size()<<endl;
    cout<<v.at(2)<<endl;
    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    

cout<<"before pop"<<endl;
for(int i:v){
    cout<<i<<" ";
}cout<<endl;
v.pop_back();
cout<<"after popping"<<endl;
for(int i:v){
    cout<<i<<" ";
}
v.clear();
cout<< "after clear"<<v.size()<<endl;
return 0;
}