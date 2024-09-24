#include<iostream>
using namespace std;

void inches_to_feet(double inches);

int main()
{
	double inches;
	cout<<"Enter the measurement in inches:";
	cin>>inches;
	inches_to_feet(inches);
	return 0;
}
void inches_to_feet(double inches)
{
	double feet;
	//12 inches = 1 feet
	feet=inches/12;
	cout<<"Measurement in feet:"<<feet;

}