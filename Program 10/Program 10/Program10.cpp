#include <iostream>
using namespace std;

int main()
{
	int total = 40;
	int forLecturer = 12;
	int perStudent = ((total - forLecturer) / 14);

	cout << "Number for teacher:" << forLecturer << endl;
	cout << "Each student gets:" << perStudent << endl;

	cin.get();
	return 0;

}