#include <iostream>
#include <string>
using namespace std;

int smallerNumber(int a, int b);
bool wantsToPlay = true;
string playAgain;
int num1;
int num2;

int main()
{
	while (wantsToPlay == true)
	{
		cin >> num1;
		cin >> num2;

		if (num1 == num2)
		{
			cout << "These numbers are the same" << endl;
		}
		else
		{
			smallerNumber(num1, num2);
			cout << smallerNumber(num1, num2) << " is smaller" << endl;
		}
		cout << endl;
		cout << "do you want to continue?	Yes = Y,  No = N " << endl;

		cin >> playAgain;
		if (playAgain == "Y" || playAgain == "y")
		{
			wantsToPlay = true;
		}
		else
			wantsToPlay = false;
	}
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;

}

int smallerNumber(int a, int b)
{
	if (a > b)
	{
		return b;
	}
	else if (a < b)
	{
		return a;
	}
	else if (a == b)
	{
		return a;
	}
}
