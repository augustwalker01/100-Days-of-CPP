//for accessing elements in an array
#include<iostream>
using namespace std;
int main()

{
    int A[6]={1,3,5};

   for(int x:A)/*here for each loop is used generally in arrays*/
    {
        cout<<x<<endl;
    }
    
    return 0;
}