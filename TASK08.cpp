#include<iostream>
using namespace std;

void calculatePayableAmount(string day,int amount);

int main()
{
	int amount;
	string day;
	cout<<"Enter the day of purchase:";
	cin>>day;
	cout<<"Enter purchase amount:";
	cin>>amount;
	calculatePayableAmount(day,amount);
	return 0;
}
void calculatePayableAmount(string day,int amount)
{
	int discount;
	if(day=="Sunday")
	{
		//10% discount on Sunday
		discount=amount*10/100;
		amount-=discount;
	}
	cout<<"Payable amount:"<<amount;
}