#include<iostream>
using namespace std;
class Solution{   
public:
    int getPairsCount(int arr[], int n, int k) {
        int count1=0;
        int count2=0;
        // code here
        int j;
        for(int i=0, j=n-1;j>0;)
        {
            if(arr[i]+arr[j]==k)
            {
                count1++;
                j--;
            }
            else
            {
                j--;
                continue;
            }
        }
        for(int i=0;j=(n-1);i<(n-1))
        {
            if(arr[i]+arr[j]==k)
            {
                count2++;
                i++;
            }
            else
            {
                i++;
                continue;
            } 
        }
        int count=count1+count2;
        return count;
    }
};