#include <iostream>
using namespace std;

int main()
{
	//Part 1
	cout << "Please enter 2 numbers!" << endl;
	
	int response1;
	int response2;
	
	//gets response 1
	cin >> response1;

	//clears cin
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	//gets respoonse 2
	cin >> response2;

	//testing the variables
	//cout << response2 << endl;
	//cout << response1 << endl;

	int ResponseSum = (response1 + response2);

	cout << endl;
	cout << "The sum of the numbers you gave me is: " << ResponseSum  << endl;
	cout << endl;
	cout << "The mean of the numbers you gave me is: " << (ResponseSum / 2) << endl;

	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cout << endl;

	//Part 2
	cout << "Please enter another number" << endl;
	cin >> response1;
	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	int accumulation = ResponseSum + response1;

	cout << endl;
	cout << "The sum of the numbers you gave me is: " << accumulation << endl;
	cout << endl;
	cout << "The mean of the numbers you gave me is: " << (accumulation / 3) << endl;
	cout << endl;

	//Part 3
	cout << "Please continue to enter numbers. To stop just enter a 0" << endl;
	int i = 4;
	do
	{
		cin >> response1;
		cin.clear();
		cin.ignore(numeric_limits<streamsize>::max(), '\n');
		accumulation += response1;

		cout << endl;
		cout << "The sum of the numbers you gave me is: " << accumulation << endl;
		cout << "The mean of the numbers you gave me is: " << (accumulation / i) << endl;

		i++;
	} while (response1 != 0);
	
	cout << "you have exited the endless cycle" << endl;
	
	cin.get();
	return 0;

}