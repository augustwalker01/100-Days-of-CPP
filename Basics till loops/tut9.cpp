#include <iostream>
using namespace std;
int main() {
	int num;
	cin >> num;    
	while(num--)
	{
		int a;
		cin>>a;
		for(int i=1;i<=a;i++){
			for(int j=1;j<=2*a;j++)
			{
				cout<<"*";
			}
			cout<<endl;
		}
	}
}