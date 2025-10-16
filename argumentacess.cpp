 #include<iostream>
using namespace std;
void greet(string name, string message="HELLO")
{
	cout<<message<<","<<name<<"!"<<endl;
}
int main()
{
	greet("Alice");
	greet("Bob","Good Morning");
	return 0;
}

