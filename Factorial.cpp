#include<iostream>
using namespace std;
int main()
{
	int i,fact=1,n;
	cout<<"Enter no of which factorial you want:"<<"\n";
	cin>>n;
	for(i=1;i<=n;i++)
	   fact = fact*i;
	cout<<"Factorial is:"<<"\n"<<fact;
	return fact;
}
