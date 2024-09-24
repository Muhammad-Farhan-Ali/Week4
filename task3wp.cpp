#include<iostream>
using namespace std;

void add(int num1,int num2);

int main()
{
	add(4,5);
	return 0;
}
void add(int num1,int num2)
{
	int sum=num1+num2;
	cout<<"Sum:"<<sum;
}