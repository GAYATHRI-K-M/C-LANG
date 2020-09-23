#include<iostream>
using namespace std;
int main()
{
	int age;
	cout<<"Enter your age: "<<"\n";
	cin>>age;
	
	if(age>=18)
	{
		cout<<"You are ELIGIBLE to vote";
	}
	
	else
	{
		cout<<"You are NON-ELIGIBLE for voting"<<"\n";
		cout<<"Wait untill you attain 18 years of age";
	}
	
	return 0;
}
