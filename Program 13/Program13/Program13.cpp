#include <iostream>


#include <string>
using namespace std;

int main()
{
	int NumberOfLines;
	int i;
	int a;
	string PlayAgain;

	cout << "Would you like to play? (Y = Yes, N = No)" << endl;
	getline (cin, PlayAgain);

	while (PlayAgain == "Y" || PlayAgain == "y")
	{
		PlayAgain = "";
		cout << "Please enter a number between 1 and 10" << endl;
		cin >> NumberOfLines;

		while (NumberOfLines > 10 || NumberOfLines < 1)
		{
			cout << "Please make sure the number is between 1 and 10" << endl;
			cin >> NumberOfLines;
		}

		for (a = 0; a < NumberOfLines; a++)
		{
			//cout << a << endl;

			for (i = 0; i < a + 1; i++)
			{
				cout << " *";
			}
			cout << endl;

		}

		cout << "Would you like to play again? (Y = Yes, N = No)" << endl;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		getline(cin, PlayAgain);

	}

	cout << "Goodbye!" << endl;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;

}