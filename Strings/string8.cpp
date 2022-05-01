#include<iostream>
#include<string>

using namespace std;
int main(){
string str;
getline(cin, str);
str.erase(3 ,3);//first argument tells where to start from..... second whereb to stop
cout<<str;

return 0;
}