#include<iostream>
using namespace std;

void calculate_payable_amount(string day,double purchase_amount);

int main()
{
	double purchase_amount;
	string day;
	
	while(true)
	{
		cout<<"Enter the day:";
		cin>>day;
		cout<<"Enter purchase amount:";
		cin>>purchase_amount;
		calculate_payable_amount(day,purchase_amount);
	}	
	return 0;
}
void calculate_payable_amount(string day,double purchase_amount)
{
	double disc=0,payable_amount;
	if (day == "Sunday")
	{
		disc = purchase_amount*10/100;
	}
	else
	{
		disc = purchase_amount*5/100;
	}
	payable_amount=purchase_amount-disc;
	cout<<"Payable amount:"<<payable_amount<<endl;
}