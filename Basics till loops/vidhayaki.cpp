#include<iostream>
using namespace std;
int main(){
double price, radius,height,volume,litres;

//cout<<"enter radius and height"<<endl;

cin>>radius;
cout<<" ";
cin>>height;
volume= 3.14*radius*radius*height;
//cout<<volume<<"cm^3"<<endl;
litres=volume/1000;
//cout<<litres<<"litres"<<endl;
price=40*litres;
cout<<price;
return 0;
}