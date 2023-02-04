#include <iostream>
using namespace std;

const int s = 10;

int main()
{
	int array[s] = { 9, 4, 54, 23, 54, -23, 0, 54, 5, 8 }, num = 0, repeatcheck[s];

	cout << "Enter a number: ";
	cin >> num; cout << endl;

	for (int i = 0; i < s; i++)
	{
		for (int j = 1; j < s; j++)
		{
			for (int k = 2; k < s; k++)
			{
				                           //very lon condition to prevent repetition of triplet :(
				if (((array[i] + array[j] + array[k]) == num) && (repeatcheck[i] != array[i]) && (repeatcheck[i] != array[j])&&(repeatcheck[i] != array[k])&&(repeatcheck[j] != array[i])&&(repeatcheck[j] != array[k])&&(repeatcheck[j] != array[j])&&(repeatcheck[k] != array[i])&&(repeatcheck[k] != array[k])&&(repeatcheck[k] != array[j]))
				{
					    cout << array[i] << " + " << array[j] << " + " << array[k] << " = " << num << endl;
						repeatcheck[i] = array[i];
						repeatcheck[j] = array[j];
						repeatcheck[k] = array[k];
				}
			}
		}
	}


	return 0;
}