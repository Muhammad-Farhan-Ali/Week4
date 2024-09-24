#include<iostream>
using namespace std;

int calculateFuel(double distance);

int main()
{
	double distance;
	cout<<"Enter the distance to be travelled:";
	cin>>distance;
	calculateFuel(distance);	
	return 0;
}
int calculateFuel(double distance)
{
	double fuel;
	fuel=distance*10;
	if(fuel<100)
	{
		cout<<"Fuel needed:100";
	}
	else
	{
		cout<<"Fuel needed:"<<fuel;
	}


}