#include <iostream>
#include <math.h>

using namespace std;

int main()
{
	float a = 0.0, b = 0.0, c = 0.0;

	                             //Taking inputs.
	cout << "enter first number: ";
	cin >> a; cout << endl;

	cout << "enter second number: ";
	cin >> b; cout << endl;

	cout << "enter third number: ";
	cin >> c; cout << endl;

		                        //Checking for pythagorean triple.
	if (pow(a, 2) == pow(b, 2) + pow(c, 2) || pow(b, 2) == pow(a, 2) + pow(c, 2) || pow(c, 2) == pow(a, 2) + pow(b, 2))
	{
		cout << "Typed three numbers are pythagorean triple" << endl;
	}

	else
	{
		cout << "Typed three numbers are not pythagorean triple" << endl;
	}

}