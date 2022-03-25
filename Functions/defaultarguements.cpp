#include<iostream>
using namespace std;
float add(float x ,float y=0,float z=0)
//^| this tells us what will be returned regardless of what's in the bracket
{
    return x+y+z;
}



int main(){
    cout<<add(10.6);
    cout<<add(10,6);
    cout<<add(4.76,12,2.888);

return 0;
}