#include<iostream>
using namespace std;

void calculate_fuel(double distance);

int main()
{
	double distance;
	cout<<"Enter the distance to be travelled:";
	cin>>distance;
	calculate_fuel(distance);	
	return 0;
}
void calculate_fuel(double distance)
{
	double fuel;
	fuel=distance*10;
	cout<<"Fuel required:"<<fuel;
}