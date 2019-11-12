#include <iostream>
using namespace std;

int main()
{
	cout << "Please choose an option: 1. Sunny  2. Cloudy  3. Raining  4. Exit" << endl;

	int response;
	cin >> response;

	switch (response)
	{
		case 1:
		{
			cout << "Don't forget your sunscreen" << endl;
			break;
		}

		case 2:
		{
			cout << "It wont rain... I think" << endl;
			break;
		}

		case 3:
		{
			cout << "An umbrella might be needed" << endl;
			break;
		}

		case 4:
			break;
	}

	cout << "Have a good day :D" << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}