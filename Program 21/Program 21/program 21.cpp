#include <iostream>
using namespace std;

int main()
{
	int mainArray[5];
	int currentBig = 0;
	int placeInArray;

	for (int i = 0; i < 5; i++)
	{
		cin >> mainArray[i];
	}

	cout << "Repating the array back as normal" << endl;
	for (int a = 0; a < 5; a++)
	{
		cout << mainArray[a] << endl;
	}

	cout << "Repating the array in reverse order" << endl;
	for (int b = 4; b >= 0; b--)
	{
		cout << mainArray[b] << endl;
	}

	cout << "Finding the largets numbers location" << endl;
	for (int c = 0; c < 5; c++)
	{
		if (mainArray[c] > currentBig)
		{
			currentBig = mainArray[c];
			placeInArray = c;
		}
	}
	cout << currentBig << " in position " <<placeInArray << endl;

cin.ignore(numeric_limits<streamsize>::max(), '\n');
cin.get();
return 0;

}
