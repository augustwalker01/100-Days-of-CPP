#include<iostream>
using namespace std;

float fact(int a)
{
float p =1;
for (float i = 1; i <= a; i++)
{
    p*=i;
}
return p;

}

int main()

{
    float x,f;
    cout<<"enter x";
    cin>>x;
    
   for ( float j = 1; j <= x; j++)
   {
      f= 1/fact(j);
   }
   cout<<f;

return 0;
}