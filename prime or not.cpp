//prime or not//
#include<iostream>
using namespace std;
int main()
{
	int n,i,count=0;
	cout<<"enter the num";
	cin>>n;
	for(i=1;i<=n;i++)
	{
		if(n%i==0)
		count++;
	}	
	if(count==2)
	cout<<"it is a prime"<<endl;
	else
	cout<<"it is not a prime"<<endl;
}*/


