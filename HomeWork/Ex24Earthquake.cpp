#include<iostream>
using namespace std;
int main()
{
	double m; // taking double variable as the datatype for m 
	cout << "please enter the mangitude of the earthquake: ";
	cin >> m; // entering value in variable 
	if (m < 2.0 && m > 0.0) // using condition 
	{
		cout << m << " earthquake is considered to be a micro earthquake." << endl;
	}
	else if (m < 3.0 && m > 2.0)
	{
		cout << m << " earthquake is considered to be a very minor earthquake." << endl;
	}
	else if (m < 4.0 && m > 3.0)
	{
		cout << m << " earthquake is considered to be a minor earthquake." << endl;
	}
	else if (m < 5.0 && m > 4.0)
	{
		cout << m << " earthquake is considered to be a light earthquake." << endl;
	}
	else if (m < 6.0 && m > 5.0)
	{
		cout << m << " earthquake is considered to be a moderate earthquake." << endl;
	}
	else if (m < 7.0 && m > 6.0)
	{
		cout << m << " earthquake is considered to be a strong earthquake." << endl;
	}
	else if (m < 8.0 && m > 7.0)
	{
		cout << m << " earthquake is considered to be a major earthquake." << endl;
	}
	else if (m < 10.0 && m > 8.0)
	{
		cout << m << " earthquake is considered to be a great earthquake." << endl;
	}
	else if (m > 10.0)
	{
		cout << m << " earthquake is considered to be a meteoric earthquake." << endl;
	}
	else // false Block
	{
		cout << "You entered an invalid value" << endl;
	}
	return 0;
}