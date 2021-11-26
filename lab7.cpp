// lab7.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

using namespace std;
int main()
{
	double z, y;
	cin >> y;
	z = 1;

	for (int m = 2; m <= 10; m++) {
		z *= log10(m * y);
	}
	z = z + 3 * sin(y);
}