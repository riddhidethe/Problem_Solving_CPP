#include<iostream>
using namespace std;
int main()
{
	int f1=1,f2=2,f3=0,n,i;
	cout<<"Enter no of terms you want:"<<"\n";
	cin>>n;
	for(i=1;i<=n;i++)
	{
	   if(i==1)
	   {
	      cout<<f1<<"\n";
		  continue;
       }
       if(i==2)
       {
	      cout<<f2<<"\n";
		  continue;
	   }
	   f3 = f1+f2;
	   f1 = f2;
	   f2 = f3;
	   
	   cout<<f3<<"\n";
    }
	return 0;
}

