#include<bits/stdc++.h>
using namespace std;

class Solution {
public:

    int search(int arr[],int n,int t) {
        cin>>t;
        int l=arr[0];
        int h=arr[n];
        int mid=arr[n/2];
       while(l<h)
        {
            if(arr[mid]==t)
            {
               cout<<mid; 
                return mid;
            }
            else if(t>arr[mid])
            {
                l=mid+1;
              
            }
            else if(t<arr[mid])
            {
                h=mid-1;
               
            }
            mid=(l+h)/2;
        }
        
    }
};