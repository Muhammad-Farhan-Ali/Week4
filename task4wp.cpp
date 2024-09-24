#include<iostream>
using namespace std;

void sum(double num1,double num2);
void diff(double num1,double num2);
void multiply(double num1,double num2);
void divide(double num1,double num2);

int main()
{
	double num1,num2;
	char op;

	while(true)
	{
	cout<<"Enter first number:";
	cin>>num1;
	cout<<"Enter second number";
	cin>>num2;
	cout<<"Enter the operation to perform (+,-,*,/):";
	cin>>op;

	if(op=='+')
	{
		sum(num1,num2);
	}
	if(op=='-')
	{
		diff(num1,num2);
	}
	if(op=='*')
	{
		multiply(num1,num2);
	}
	if(op=='/')
	{
		divide(num1,num2);
	}
	}
	return 0;
}

void sum(double num1,double num2)
{
	cout<<"Sum:"<<num1+num2<<endl;
}
void diff(double num1,double num2)
{
	cout<<"Subtraction:"<<num1-num2<<endl;
}
void multiply(double num1,double num2)
{
	cout<<"Product:"<<num1*num2<<endl;
}
void divide(double num1,double num2)
{
	cout<<"Division:"<<num1/num2<<endl;
}