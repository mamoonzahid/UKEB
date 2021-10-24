#include<iostream>
using namespace std;
int main()
{
	bool myBirthday = true; // we took a variable myBirthday with data type bool
	int age = 18; // we took a variable int age with value 18 

	if (myBirthday == true) // checking if the condition is true or not 
	{
		age++; // true block
		cout << "It is my birthday. I am " << age << " years old";// false block
	}
	else 
	{
		cout << "It is not my birthday" << endl;// false block
	}
	return 0;
}