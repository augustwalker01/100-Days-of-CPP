#include<iostream>
using namespace std;
int main(){
float a,b,c;
int t;
cin>>t;
while(t--){
cin>>a>>b>>c;
if((a+b)/2<35)
{
    cout<<"FAIL";
}
else if((b+c)/2<35)
{
    cout<<"FAIL";
}
else if((c+a)/2<35)
{

    
    cout<<"FAIL";
}
else
cout<<"PASS";
}
return 0;

}