#include<iostream>
using namespace std;
int main()

{
    int d,c;
    cout<<"Enter day"<<endl;
    cin>> d;
    switch (d)
    {
    case 1:
    cout<<" mon";
        break;
    case 2:
    cout<<" tue";
        
    case 3:
    cout<<"wed ";
    
   
    default:
    cout<<"not valid";
        break;
    }
return 0;
}
