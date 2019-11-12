#include <iostream>
#include <string>
using namespace std;

bool checkOddEven(int numIn);
void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal);
int UserInput, numOfOdd =0, numOfEven = 0, oddTotal = 0, evenTotal = 0;

int main() 
{
	for (int i = 0; i < 10; i++)
	{
		cout << "Please enter your number" << endl;
		cin >> UserInput;
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		checkOddEven(UserInput);
		//cout << checkOddEven(UserInput) << endl;
		if (checkOddEven(UserInput))
		{
			numOfEven++;
			evenTotal += UserInput;
		}
		else
		{
			numOfOdd++;
			oddTotal += UserInput;
		}
	}
	outputResults(numOfOdd, oddTotal, numOfEven, evenTotal);
	cin.get();
	return 0;
}

bool checkOddEven(int numIn)
{
	if (numIn % 2 == 0)
	{
		return true;
	}
	else
	{
		return false;
	}
}

void outputResults(int numOfOdd, int oddTotal, int numOfEven, int evenTotal)
{
	cout << "Number of even numbers " << numOfEven << endl;
	cout << "Number of odd numbers " << numOfOdd << endl;
	cout << "Sum of even numbers " << evenTotal << endl;
	cout << "Sum of odd numbers " << oddTotal << endl;
}
