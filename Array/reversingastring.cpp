#include<bits/stdc++.h>
using namespace std;
int main(){
    string str;
    cin>>str;
    string stringrev;
    for(int i=str.size()-1;i>=0;i--)
    {
        stringrev.push_back(str[i]);

    }cout<<stringrev;


return 0;
}