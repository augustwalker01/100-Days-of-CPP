#include<iostream>
using namespace std;
int main(){
int count=0;
int A[4]={2,4,3,5};
for(int i=0;i<=3;i++){
    if(A[i]%2!=0){
        count++;
    }
}
cout<<count;
return 0;
}