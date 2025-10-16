//calculator//
#include<iostream>
 using namespace std;
int main()
{
		int a,b,c;
	char op;
	cout<<"Enter operator";
	cin>>op;//make a calculator
	cout<<"Enter n values";
	cin>>a>>b;
	
	switch(op)
	{
		case'+':c=a+b;
		cout<<c;
		break;
		case'-':c=a-b;
		cout<<c;
		break;
		case'*':c=a*b;
		cout<<c;
		break;
		case'/':c=a/b;
	   	cout<<c;
		break;
		case'%':c=a%b;
		cout<<c;
		break;
		default:printf("invalid operato");
	}
}*/




