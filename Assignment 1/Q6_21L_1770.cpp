#include <iostream>
using namespace std;

int main()
{
	float w = 0.0, h = 0.0, bmi = 0.0;

	                      //Taking input from user.
	cout << "Enter your Weight in Kg: ";
	cin >> w;
	cout << endl;

	cout << "Enter your Height in meters: ";
	cin >> h;
	cout << endl;

	                      //calculating BMI.
	bmi = w / (h * 2);

	cout << "Your Body Mass Index is= " << bmi << endl;


}