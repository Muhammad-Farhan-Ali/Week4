#include<iostream>
using namespace std;

void sum(double num1,double num2);


int main()
{
	double num1,num2;
	char op;

	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number";
	cin>>num2;
	cout<<"Enter the operation to perform (+,-,*,/):";
	cin>>op;
	//it is only for sum operator for other operators no value returned
	if(op=='+')
	{
		sum(num1,num2);
	}
	return 0;
}

void sum(double num1,double num2)
{
	cout<<"Sum:"<<num1+num2<<endl;
}