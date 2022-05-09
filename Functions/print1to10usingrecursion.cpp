#include<iostream>
using namespace std;
int recur(int a)
{
 
    
      if (a>0)
      {
        
        cout<<a;
        return recur(a-1);
      }
       return 0;
}
int main(){
    int a;
cin>>a;
cout <<recur(a);

return 0;
}