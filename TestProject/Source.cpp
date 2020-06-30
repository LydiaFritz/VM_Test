#include <iostream>
#include <vector>
#include <fstream>
#include "Rectangle.h"

using namespace std;

int main() {

	
	vector<Rectangle> vec;
	double len, wid;

	ifstream fin("input.in");
	if (!fin) {
		cout << "file not found" << endl;
		exit(1);
	}
	while (fin >> len >> wid) {
		Rectangle r(len, wid);
		vec.push_back(r);
	}

	fin.close();
	ofstream fout("output.out");

	for (int i = 0; i < vec.size(); i++)
		fout << vec[i].getArea() << endl;

	cout << "Checking...." << endl;

	fout.close();

	return 0;
}