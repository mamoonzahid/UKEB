#include<iostream>
#include<string>
using namespace std;
int main()
{
	bool a; // Taking a variable as bool foe musician
	int answer;
	int b; // Taking 2nd variable int instrument 
	cout << " Do you play any musician instrument?\n1: Yes\n2: No\n";
	cin >> answer;
	if (answer == 1) // condition for int a variable
	{
		a = true;
	}
	else
	{
		a = false;
	}
	if (a == true) // True Block
	{
		cout << "Alright! What kind of insturment you play though? \n1: Guitar\n2: Drums\n3: Something Else" << endl;
		cin >> b;
		if (b == 1) // 1st condition 
		{
			cout << "Nice, I really needed a guitarist." << endl;
		}
		else if (b == 2) // 2nd condition
		{
			cout << "Nice, I really needed a drummer." << endl;
		}
		else // False block
		{
			cout << "Ahh that sucks, I only need a guitarist or a drummer." << endl;
		}
	}
	else // Outer false block
	{
		cout << "Aww man, I really wanted to start a band." << endl;
	}
	return 0;
}