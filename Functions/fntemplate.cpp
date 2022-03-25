#include<iostream>
using namespace std;
template <class T>
T maxim(T a,T b)

{

    
    return a>b?a:b;
}

int main()
{
cout <<maxim(45,7)<<endl;
cout <<maxim(5.8,9.8)<<endl;
cout<<maxim(7.8f,8.9f);

return 0;
}