#include <iostream>
using namespace std;

int main() {
   
   int a[3][3],b[3][3],i,j,k,mul[3][3]={0};
   
   cout<<"enter the first matrix"<<endl;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           cout<<"enter the elements";
           cin>>a[i][j];
       }
   }
  

   cout<<"the first matrix...."<<endl;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           cout<<a[i][j]<<" ";
       }
       cout<<endl;
   }

   cout<<"enter the second matrix"<<endl;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           cout<<"enter the elements";
           cin>>b[i][j];
       }
   }

   cout<<"the second matrix...."<<endl;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           cout<<b[i][j]<<" ";
       }
       cout<<endl;
   }


   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           for(k=0;k<3;k++)
           {
               mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
               // Element on A01 and b10 is multiplied therefore k was used here ....and then added to multiply matrix.
           }
       }
   }
   cout<<"multiplication is"<<endl;
   for(i=0;i<3;i++)
   {
       for(j=0;j<3;j++)
       {
           cout<<mul[i][j]<<" ";
       }
       cout<<endl;
   }
    return 0;
}