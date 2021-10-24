#include<iostream>
using namespace std;
int main()
{
	double c; 
	cout << "Enter the temperature in celsius: ";
	cin >> c;
	cout << c << " celsius is " << (c * 1.8000) + 32 << " in Fahrenheit.\n";
	return 0;
}