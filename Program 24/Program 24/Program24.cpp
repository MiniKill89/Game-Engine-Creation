#include <iostream>
#include <string>
using namespace std;

char initialArray[20] = " ";

int main()
{	
	cout << "Please enter your full name" << endl;
	cin.getline(initialArray, 20); 
	//cout << initialArray;

	for (int i = 0; i <= 20; i++)
	{
		if (initialArray[i] != ' ')
		{
			cout << initialArray[i];
		}
		else
			cout << endl;
	}

	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;
}
