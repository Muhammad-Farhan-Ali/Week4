#include<iostream>
using namespace std;

void test(int score);

int main()
{
	int score;
	cout<<"Enter your score:";
	cin>>score;
	test(score);
	return 0;
}
void test(int score)
{
	if(score>50)
	{
		cout<<"PASS!";
	}
	else
	{
	cout<<"FAIL!";
	}
}
