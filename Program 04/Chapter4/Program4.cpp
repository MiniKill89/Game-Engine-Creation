#include <iostream>
using namespace std;
typedef int date;

int main()
{
	enum  Month
	{
		JANUARY = 1,
		FEBRUARY,
		MARCH,
		APRIL,
		MAY,
		JUNE,
		JULY,
		AUGUST,
		SEPTEMBER,
		OCTOBER,
		NOVEMBER,
		DECEMBER
	};


	date myNum1 = 15;
	Month CurrentMonth = APRIL;

	cout << "Current date: " << myNum1 << std::endl;
	cout << "Current month: " << CurrentMonth << std::endl;

	cin.get();
	return 0;

}