#include <iostream>
#include "Rectangle.h"

using namespace std;

int main() {

	cout << "What is 3 * 3.123?" << endl;
	cout << 3 * 3.121 << endl;

	Rectangle r(3.123, 3.123);
	cout << r << endl;

	return 0;
}