#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i < 21; i++)

	{

		if (i % 3 == 0 && i % 5 != 0)
		{
			cout << "Buzz" << endl;

		}

		else if (i % 5 == 0 && i % 3 != 0)
		{
			cout << "Fizz" << endl;
		}

		else if (i % 3 == 0 && i % 5 == 0)
		{
			cout << "Fizz Buzz" << endl;
		}

		else
		{
			cout << i << endl;
		}

	}

	cin.clear(); // reset any error flags
	cin.ignore(32767, '\n'); // ignore any characters in the input buffer until we find an enter character
	cin.get(); // get one more char from the user

	return 0;
}