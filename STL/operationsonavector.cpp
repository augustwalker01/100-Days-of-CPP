#include<bits/stdc++.h>
using namespace std;
int main(){
    vector<int>v={4,5,3,5,43,2,78,98};
    
    sort(v.rbegin(),v.rend());// decreasing
    for(auto i:v){
        cout<<i<<" ";
    }
    sort(v.begin(),v.end());// increasing
    for(auto i:v){
        cout<<i<<" ";
    }
    reverse(v.begin(),v.end());//reversing
    for(auto i:v){
        cout<<i<<" ";
    }
    

    

}