 #include<iostream>
 using namespace std;
 void swap(int &a , int &b)
 {
     cout<<&a<<" "<<&b<<endl;
    int temp=a;
    a=b;

    
    b=temp;
    cout<<&a<<" "<<&b<<endl;
 }
 int main(){

     int x=13, y=23;
 swap(x,y);
 cout<<x<<" "<<y<<endl;
 
 return 0;
 }