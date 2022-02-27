#include<iostream>
using namespace std;
int main(){
    int A[12]={2,3,4,5,6,9,10,11,14,18,19,23};
int l=0,h=11,mid,key;
cout<<"Enter key"<<endl;
cin>> key ;

while (l<=h)
{
    mid=(l+h)/2;
    if (A[mid]==key)
    {
        cout<<"The number is found at"<< mid <<endl;
        break;
    }
    else if(key>A[mid])
    {
        l=mid+1;
       
    }
    else
    {
        h=mid-1;

    }
    
}
   

    
   
    
    
    


return 0;
}