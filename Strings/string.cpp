#include<iostream>
#include<string>
using namespace std;
int main(){
    string str1="abccc";
    string str2="abccc";
    cout<<str1<<endl;
    str1.clear();
    if (str1.empty())
    {
cout<<"the string is empty"<<endl;
    }
    

return 0;
}