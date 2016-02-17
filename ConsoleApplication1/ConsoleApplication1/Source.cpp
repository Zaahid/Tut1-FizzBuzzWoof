#include<iostream>
using namespace std;
int main()
{
	int i;
	for (i = 1; i < 51; i++)

	{

		if (i % 3 == 0 && i % 5 == 0 && i % 7==0)
		{
			cout << "Fizz Buzz Woof" << endl;

		}

		else if (i % 5 != 0 && i % 3 != 0 && i % 7 ==0)
		{
			cout << "woof"<< endl;
		}

		else if (i % 3 == 0 && i % 5 != 0 && i % 7 !=0 )
		{
			cout << "Fizz" << endl;
		}
		else if (i % 3 == 0 && i % 5 != 0 && i % 7 == 0)
		{
			cout << "Fizz woof" << endl;
		}
		else if (i % 5 == 0 && i % 3 != 0 && i % 7 != 0)
		{
			cout << "Buzz"<< endl;
		}

		else if (i % 3 == 0 && i % 5 == 0 && i % 7 != 0)
		{
			cout << "Fizz Buzz" << endl;
		}
		else if (i % 3 != 0 && i % 5 == 0 && i % 7 == 0)
		{
			cout << "buzz wolf" << endl;
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