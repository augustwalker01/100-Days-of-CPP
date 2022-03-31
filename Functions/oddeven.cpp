#include<iostream>
using namespace std;
void num(int n)
{
    if(n%2==0)
    {
        cout<< " even";

    }
    else
    {
        cout<<" odd";
    }

}
int main(){
    int n;
    cout<< "enter n "<<endl;
    cin>>n;
    num(n);

return 0;
}