#include <iostream>

using namespace std;

int main(){
	int num;
	cin>>num;
	
	
	if(num==2)
	{
		cout<<"NO";
	}
	else if(num%2==0||num%4==0)
	{
		cout<<"YES";
	}
	else
	cout<<"NO";
return 0;
}