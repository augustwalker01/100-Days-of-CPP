#include<iostream>
using namespace std;
void recur(int a)
{
 
    
      if (a>0)
      {
           recur(a-1);
          cout<<a;
      
      }
      else
      {
         cout<<" 0";
      }
}
int main(){
    int a;
cin>>a;
recur(a);

return 0;
}