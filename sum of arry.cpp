//sum of array//
#include<iostream>
 using namespace std;
int main()
{
int arr[100];
	int n,i;
	int sum=0;
	cout<<"enter size for array";
	cin>>n;
	cout<<"enter array vaalues";
	for(i=0;i<n;i++)
	{
		cin>>arr[i];
	}
	cout<<"sum of array elements are";
	for(i=0;i<n;i++)
	{
	sum=sum+arr[i];
	}
	cout<<sum;	
}



