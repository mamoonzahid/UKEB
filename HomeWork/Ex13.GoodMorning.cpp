#include<iostream>
using namespace std;
int main()
{
	int currentTime = 3; // We took a variable int current time with the value of 3
	if (currentTime <= 12 && currentTime >= 0) // Applying Condition 
	{
		cout << "Good Morning" << endl; // Good Morning output
		cout << "It's AM " << endl;
	}
	else if (currentTime < 19)
	{
		cout << "Good Afternoon" << endl; // Good Afternoon output
		cout << "It's PM " << endl;
	}
	else if (currentTime < 22)
	{
		cout << "Good Evening" << endl; // Good Evening output
		cout << "It's PM " << endl;
	}
	else if (currentTime < 25)
	{
		cout << "Good Night" << endl; // Good Night output
		cout << "It's PM " << endl;
	}
	else
	{
		cout << "Time not valid " << endl; // Time not valid output
	}
	return 0;
}