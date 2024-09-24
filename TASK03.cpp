#include<iostream>
using namespace std;

void howManyStikers(int side_length);

int main()
{
	int side_length;
	cout<<"Enter the sidelength of cube:";
	cin>>side_length;
	howManyStikers(side_length);
	return 0;
}
void howManyStikers(int side_length)
{
	int number_of_stikers;
	number_of_stikers=(side_length*side_length)*6;
	cout<<"Total number of stikers of a cube of side length "<<side_length<<" is:"<<number_of_stikers;
}