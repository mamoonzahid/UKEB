#include <iostream> 
#include<math.h>
using namespace std;
int main() {
	int num;
	cout << "enter a number: ";
	cin >> num;
	while (cin.fail())
	{
		cin.clear();
		cin.ignore(1000, '\n');
		cout << "Invalid input, try again: ";
		cin >> num;
	}
	for (int i = 1; i <= num; i++)
	{
		cout << "The number is " << i << " and the cube is: " << pow(i, 3) << endl;
	}
	return 0;
}