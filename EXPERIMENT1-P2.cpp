#include <iostream>
#include <conio.h>

using namespace std;

int main()
{
	double mass, density;
	double volume;
	cout << "Input mass in grams and density in grams per cubic centimeters separated by space" << endl;
	cin >> mass >> density;

	volume = mass / (4 * density);

	cout << " " << endl;
	cout << "volume" << endl;
	cout << volume << " " << "cubic centimeter" << endl;

	_getch();
	return 0;
}