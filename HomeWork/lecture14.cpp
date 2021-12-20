#include<iostream>
#include<iomanip>
#include<Windows.h>
#include<array>
#include<algorithm>
using namespace std;
int main()
{
	array<int, 5> myarray{ 9, 7, 5, 3, 1 };
	array<string, 4> arr = { "Mars Bar", "Snickers", "Bounty", "M&Ms" };
	cout << arr.at(1) << endl; //returns value at index 1 e.g. snickers
	cout << arr[1] << endl; //does the same as the above
	cout << arr.front() << endl;//returns value at beginning of array (Mars Bar)
	cout << arr.back() << endl; //returns value at end of array (M&Ms)
	// utilise a for loop to run through array
	for (int i = 0; i < arr.size(); i++)
	{ //note use size() in condition
		cout << arr.at(i) << ", ";
	}
	cout << endl;
	array<int, 5> numbers = { 33, 5, 7, 99, 83 };
	sort(numbers.begin(), numbers.end()); // + call to sort here
	for (int num : numbers) {
		cout << num << " "; //output should be 5, 7, 33, 83, 99
	}
	cout << endl;
	reverse(numbers.begin(), numbers.end()); // + call to sort here
	for (int num : numbers) {
		cout << num << " "; //output should be 5, 7, 33, 83, 99
	}
	cout << endl;
	int randomArry[10];
	for (int i = 0; i < 10; i++)
	{
		randomArry[i] = rand() % 50;
		cout << randomArry[i] << endl;
	}
	int a[1000];
	int counter = 0;
	srand(50);
	for (int i = 0; i < 1000; i++)
	{
		a[i] = rand() % 100;
		cout << a[i] << endl;
		if (a[i] == 6)
		{
			counter++;
		}
	}
	cout << "The number 6 appeared " << counter << " times." << endl;
	array<int, 10> b;
	cout << "Enter 10 number" << endl;
	for (int i = 0; i < 10; i++)
	{
		cin >> b[i];
	}
	sort(b.begin(), b.end());
	cout << endl << b[9] << " is the largest number.";
	cout << endl << b[0] << " is the smallest number.";
	return 0;
}