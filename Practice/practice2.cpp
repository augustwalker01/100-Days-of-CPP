#include<iostream>
using namespace std;
int main(){
    int n,i;
   /* cout<< "The size of char is "<< sizeof(char)<<" bytes "<<endl;
    cout<< "The size of int is "<< sizeof(int)<<" bytes "<<endl;
    cout<< "The size of double is "<< sizeof(double)<<" bytes "<<endl;
    cout<< "The size of float is "<< sizeof(float)<<" bytes "<<endl;*/
cout<<"enter a datatype"<<endl;
cin>>n;
switch (n)
{
case 1:
   cout<<"ok";
    break;
 case 2:
    for (int i = 0; i < 4; i++)
    {
        cout<<"ok"<<endl;
    }
     break;
case 3:
    while (i>2)
    {
        i++;
        cout<<"ok";
    }
    
 default:
    {
        cout<<"not recognised";
        break;
    }
}

return 0;
}