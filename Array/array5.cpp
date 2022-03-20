#include<iostream>
using namespace std;
int main()

{
    int A[7]={3,4,7,9,6,10,4};
    int max;
    max=A[0];
    for (int i = 0; i < 7; i++)
    {
        if (A[i]>max)
        {
            max=A[i];
            
        }
        
    }
    
    cout<<"maximum number is"<<max<<endl;
    return 0;
}