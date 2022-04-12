//write a program to write multiplication table of 15 using recursive function.

#include<iostream>
using namespace std;
int mult(int x,int y)
{
  if (y!=1)
  {
    cout<<mult(x,y-1);
  }
  
 return x*y;
}
int main()
{
  int x,y;
  cout<<"ENTER THE NUMBER OF WHICH MULTIPLICATION TABLE IS TO BE FOUND"<<endl;
  cin>>x;
  cout<<"enter y";
  cin>>y;
  cout<<mult( x, y);
 
  return 0;
}