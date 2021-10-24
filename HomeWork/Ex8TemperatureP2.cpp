
#include<iostream>
using namespace std;
int main()
{
	float f; 
	
	cout << "Enter the temperature in f: ";
	cin >> f;
	cout << f << " f is " << (f - 32) * 5 / 9 << " in Celsius." << endl; 
	return 0;
}
