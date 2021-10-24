#include<iostream>
using namespace std;
int main()
{
	int r;
	int a;
	int c;
	cout << "Enter the radius: ";
	cin >> r;
	a = (22 / 7) * r * r;
	c = 2 * (22/7) * r;
	cout << "circumference = " << c << endl;
	cout << "Area = " << a << endl;
	return 0;
}