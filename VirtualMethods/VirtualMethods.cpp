#include <iostream>
#include "Array.h"

using namespace std;

int main() {
    Array x(7);
	for (int index = 0; index < x.length(); index++) {
		x[index] = rand() % 250;
	}
	cout << x;

	Array y(10);
	for (int index = 0; index < y.length(); index++) {
		y[index] = rand() % 250;
	}
	cout << y;

	Array z = x + y;
	cout << z;
}
