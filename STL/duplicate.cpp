//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
  public:
   int duplicates(int arr[], int n) {
        vector<int>v;
        int hmap[n+1]={0};
        for(int i=0;i<n;i++)
        {
            hmap[arr[i]]++;
        }
        for(i=0;i<hmap.size();i++)
        {
            if(hmap[i]>1)
            {
              return hmap[i];
            }
        }
        
    }
};
int main() {
    int t;
    cin >> t;
    while (t-- > 0) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        Solution obj;
        vector<int> ans = obj.duplicates(a, n);
        for (int i : ans) cout << i << ' ';
        cout << endl;
    }
    return 0;
}

