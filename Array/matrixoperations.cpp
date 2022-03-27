#include<iostream>
using namespace std;
int main(){
    int i,j;
 int A[10][10],B[10][10],mult[10][10],r1,c1,r2,c2,k,a,b;
cout<<" enter rows and columns of first matrix :";
cin>> r1 >> c1 ;
cout<< " enter rows and columns of second matrix: ";
cin>> r2 >> c2 ;
// if c1 and r2 no same then
while (c1!=r2)
{
    cout<< " rows and columns dont match in matrix 1 and matrix 2"<< endl;
    cout<< "Enter the rows and column once again for matrix 1"<<endl;
    cin>> r1 >> c1 ;
    cout<< " enter the rows and column once again for matrix 2 "<<endl;
    cin>> r2 >> c2;
}
// for storing elements in first matrix
for ( i = 0; i < r1; i++)
{
    for ( j= 0; j < c1; j++)
    {
        cout << "Enter the element at a"<<i+1<<j+1<<endl;
        cin>>A[i][j];
    }
}
//for storing the same in 2nd matrix
for ( i = 0; i < r2; i++)
{
 for ( j = 0; j < c2; j++)
 {
     cout<<"enter the element at b"<<i+1<<j+1<<endl;
     cin>>B[i][j];
 }
 
}
//initialize the mult matrix to 0
for(i = 0; i < r1; ++i)
{
        for(j = 0; j < c2; ++j)
        {
            mult[i][j]=0;
        }

}

// Multiplying matrix a and b and storing in array mult.
    for(i = 0; i < r1; ++i)
    {
        for(j = 0; j < c2; ++j)
     {       for(k = 0; k < c1; ++k)
            {
                mult[i][j] += A[i][j]*B[i][j];
            }
     }
    }
    // Displaying 
    cout << endl << "Output Matrix: " << endl;
    for(i = 0; i < r1; ++i)
    for(j = 0; j < c2; ++j)
    {
        cout << " " << mult[i][j];
        if(j == c2-1)
            cout << endl;
    }

return 0;
}