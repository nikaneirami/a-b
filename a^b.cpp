#include <iostream>
using namespace std;
int check(int a, int b)
{
	int s=1;
	for(int i=1;i<=b;i++)
	{
		s=s*a;
	}
	return s;
}
int main() 
{
int a,b;
int s=1;
cout<<"please enter a";
cin>>a;
cout<<"please enter b";
cin>>b;
cout<<check(a,b);	
	
	
	
	return 0;
}
