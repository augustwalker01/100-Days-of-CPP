#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    getline(cin ,str);
    str.insert(8 ,"drishya");
    cout<<str;

return 0;
}