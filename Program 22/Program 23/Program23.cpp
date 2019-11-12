#include <iostream>
using namespace std;

int PlayerInp1;
int PlayerInp2;
int points;
void drawCards();
void playerGuess();
char mainArray[2][10] = { {'0', '1','2','3','4','5','6','7','8','9'},{'A','B','C','D','E','E','D','C','B','A'} };

int main()
{
	drawCards();
	while (points < 5)
	{
		playerGuess();
	}

	cout << "Congrats you did it... well done... yay" << endl;
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}

void drawCards()
{
	system("cls");
	for (int i = 0; i < 10; i++)
	{
		cout << "[" << mainArray[0][i] << "] ";
	}
	cout << endl;
}

void playerGuess()
{
	char temp;
	
	do
	{
		cin >> PlayerInp1;
		cin >> PlayerInp2;

		if (PlayerInp1 == PlayerInp2)
		{
			cout << "please choose 2 different numbers" << endl;
		}
	} while (PlayerInp1 == PlayerInp2);

	if (mainArray[1][PlayerInp1] == mainArray[1][PlayerInp2])
	{
		temp = mainArray[0][PlayerInp1];
		mainArray[0][PlayerInp1] = mainArray[1][PlayerInp1];
		mainArray[1][PlayerInp1] = temp;

		temp = mainArray[0][PlayerInp2];
		mainArray[0][PlayerInp2] = mainArray[1][PlayerInp2];
		mainArray[1][PlayerInp2] = temp;

		points++;
		drawCards();
		cout << "Correct guess!" << endl;
	}
	else
	{
		drawCards();
		cout << "Incorrect guess" << endl;
	}
}
