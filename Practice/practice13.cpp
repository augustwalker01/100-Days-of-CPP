//write a program to take two integers and an arithmetic operator so that it returns a value
#include<iostream>
using namespace std;
int x,y;
int opr;
int add()
{
return x+y;
}
int sub()
{
    return x-y;
}
int mult()
{
    return x*y;
}
float div()
{
    return x/y;
}


int main(){
   
      
   cout<<"Enter x " ;
   cin>>x;
   cout<<"Enter y " ;
   cin>>y;
   cout<<"Enter opr";
   cin>>opr;


 
 switch (opr)
 {
 case 1:
 cout<<add();
 
 
     break;
 case 2:
 cout<<sub();
 break;
 case 3:
 cout<<mult()<<endl;
 break;
 case 4:
 cout<<div();
 default:
 cout<<"Error"<<endl;
     break;
 }
   
return 0;
}