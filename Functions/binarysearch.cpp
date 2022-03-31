#include<iostream>
using namespace std;
int binary(int low, int high, int arr[],int key)
{
    if(low < high)
    {
        int mid=(low +high)/2;

        if (arr[mid]==key)
        {
            return mid;
        }
        else if (key < arr[mid])
        {
            return binary(low, mid - 1,arr,key);
        }
        else
        {
            return binary(mid +1 , high, arr, key);
        }
 
    }


}

int main()
{
    int n=5;
    int arr[n]={1,2,3,4,5};
    int low, high, mid, key;
    cin>>key;
    cout<<binary(0,5, arr,key);
 
}