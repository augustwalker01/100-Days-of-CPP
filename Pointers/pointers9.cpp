#include<iostream>
using namespace std;
int main(){
    
int size,i=0,A[size];
cout<< "enter the size"<<endl;
cin>> size;
cout<<" enter the elements"<<endl;
/*while (i <size)
{
    cin>>A[i];
    i++;
    
}*/

 for ( i = 0; i < size; i++)
 {
    cin>>A[i];
    
 }
 
  for ( i = 0; i <size; i++)
  {
    cout<<A[i];
  }
  


return 0;
}