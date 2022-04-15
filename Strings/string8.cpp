#include<iostream>
#include<string>

using namespace std;
int main(){
string str;
getline(cin, str);
str.erase(3 ,3);
cout<<str;

return 0;
}