#include <iostream>
using namespace std;

int main()
{
	int userInp;
	int numbersArray[5][2];
	int incr = 0;
	int currentSmall = 99;
	bool compare;

	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 5; j++)
		{
			cin >> numbersArray[j][i];
		}
	}

	// Used for testing numbers went into the array (From program 19)
	/* for (int row = 0; row < 5; row++)
	{
		for (int column = 0; column < 2; column++)
		{
			cout << "Array[" << row << "][" << column << "]: ";
			cout << numbersArray[row][column] << endl;
		}
	} */
	do
	{
		for (int k = 0; k < 5; k++)
		{
			for (int z = 0; z < 2; z++)
			{
				if (numbersArray[k][z] < currentSmall)
				{
					currentSmall = numbersArray[k][z];
				}
				//cout << currentSmall << endl;
			}
			compare = true;
		}
		
	}
	while (compare == false);

	cout << endl;
	cout << "The smallest value is: " << currentSmall << endl;

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;

}
