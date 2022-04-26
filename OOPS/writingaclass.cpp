#include<iostream>
using namespace std;

class Rectangle
{
    public:
    int length ;
    int breadth;

    int area()
    {
        return length*breadth;
    }
    int perimeter()
    {
        return 2*(length+breadth);
    }

};
int main(){
    Rectangle r1;
    r1.length=10;
    r1.breadth=5;
    cout<<"the area of rectangle r1 will be "<<r1. area()<<endl;
    Rectangle r2;
    r2.length=15;
    r2.breadth=10;
    cout<<"the perimeter of rectangle r2 will be "<<r2.perimeter()<<endl;

return 0;
}