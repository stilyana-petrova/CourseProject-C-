// CourseProject.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{		
	int a, b, c;

	do {
		cout << "a=";
		cin >> a;
		cout << "b=";
		cin >> b;
		cout << "c=";
		cin >> c;
	} while (a < 1 || b < 1 || c < 1);

	int S, P, p;
	p = a + b + c;
	P = p / 2;
	S = sqrt(p * (p - a) * (p - b) * (p - c));

	cout << "P=" << P << endl;
	cout << "S=" << S << endl;

	return 0;
}

