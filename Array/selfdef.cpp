#include<iostream>
using namespace std;
int main()
{
int t,n,c=0;
cin>>t;
while (t--)
{
    cin>>n;
   
       int arr[n];
       for (int i = 0; i<n ; i++)
   {
        cin>>arr[i];
      
       if(arr[i]>=15 && arr[i]<=60)
       {
           c++;
       }
   }
   cout<<c;
}
   
return 0;

}

