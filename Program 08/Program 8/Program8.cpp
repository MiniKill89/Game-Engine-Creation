#include <iostream>
using namespace std;

int main()
{
	const float kpi = 3.14;
	float radius = 22.0f;
	float areaOfCircle;

	areaOfCircle = kpi*radius*radius;

	cout << "The area of a circle with radius " << radius << " is " << areaOfCircle << endl;
	cin.get();
	return 0;
}
