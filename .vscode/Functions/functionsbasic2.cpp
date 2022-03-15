#include <iostream>
using namespace std;
int add(float x, float y)
{
    float z;

z=x+y;
return z;
}
int main()
{
    float x=7, y=9, z;
    z=add(x,y);
    cout<<z<<endl;
    return 0;
    

}