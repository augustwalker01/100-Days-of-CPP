#include <iostream>
using namespace std;

int main() {
     int t,N;
    cin>>t;
	while(t--)
	{
	    
	    cin>>N;
	    int a[N];
	    for(int i=0;i<=N;i++)
	    {
	        cin>>a[i];
	    }
	    for(int i=N;i>=0;i--)
	    {
	        cout<<a[i]<<" ";
	    }
	}
	return 0;
}