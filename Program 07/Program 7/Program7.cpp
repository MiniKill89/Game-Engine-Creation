#include <iostream>
using namespace std;

int main()
{

	float Celsius;
	float fahrenheit = 95.0f;

	Celsius = (fahrenheit - 32)*0.5556;

	cout << fahrenheit << "F is equal to " << Celsius << "C" << endl;

	cin.get();
	return 0;
}
