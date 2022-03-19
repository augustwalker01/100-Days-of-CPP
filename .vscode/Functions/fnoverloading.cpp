#include <iostream>
using namespace std;
 int add(int a, int b)
 {
return a+b;
 }
float add(float a, float b)
{
    return a+b;
}
float add(int a,int b,float c)
{
    return a+b+c;
}
int main()
{
    
    cout<<add(67,87)<<endl;
    cout<<add(3.5f,8.9f)<<endl;
    cout<<add(23,43,23.6f)<<endl;

    
return 0;
}