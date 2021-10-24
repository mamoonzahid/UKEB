#include <iostream>
using namespace std;

int main()
{

	char l;
	int count1, count2; // variable for isalpha

	cout << "Enter a letter to check whether its a vowel or a consonant: ";
	cin >> l;
	if (l == 'a' || l == 'e' || l == 'i' || l == 'o' || l == 'u' || l == 'A' || l == 'E' || l == 'I' || l == 'O' || l == 'U') // Checking if the entered character is a vowel
	{
		cout << "The input is a vowel." << endl;
	}
	count1 = isalpha(char(l)); // Using isalpha built-in function for alphabets
	count2 = isdigit(char(l)); // Using isdigit built-in function for digits
	if (count1 == 0 && count2 != 4) // Checking if the entered character is a special character, converting the special character into their ASCII code
	{
		cout << "The input is a special character." << endl;
	}
	else if (count1 != 2 && count2 == 4) // Checking if the entered character is a digit
	{
		cout << "The input is a digit." << endl;
	}
	else if (count1 != 0 && count2 != 4 && l != 'a' && l != 'e' && l != 'i' && l != 'o' && l != 'u' && l != 'A' && l != 'E' && l != 'I' && l != 'O' && l != 'U') // Checking if the entered character is a consonant
	{
		cout << "The input is a consonant." << endl;
	}
	else
	{
		cout << "The input is incorrect.";
	}
	return 0;
}