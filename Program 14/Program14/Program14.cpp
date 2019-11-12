#include <iostream>
using namespace std;
 
int main()
{
	float playerHealth = 100;
	float reduceAmount;

	for (int i = 0; i <= 9; i++)
	{
		cout << "Question  " << i+1 << ": How much should we decrease the health by? " << endl;
		cin >> reduceAmount;
		playerHealth -= reduceAmount;
		cout << playerHealth << endl;

		if (i == 9)
		{
			cout << "All 10 questions asked and player still has life remaining." << endl;
			break;
		}
		else if (playerHealth <= 0)
		{
			cout << "Player's health hit 0. Early exit." << endl;
			break;
		}
		
	}


	cin.clear();
	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	cin.get();
	return 0;

}