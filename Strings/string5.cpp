#include<iostream>
#include<string>
using namespace std;
int main()
{
    string str1="garbage value";
    str1.clear();
    cout/*<<"garbage value "*/<< str1;
    return 0;
}