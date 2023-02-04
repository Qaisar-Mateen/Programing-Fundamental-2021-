#include <iostream>
using namespace std;

int main()
{
	int t1 = 0, t2 = 1, next = 1, start = 0, end = 0;
	                                    
	                     //taking start/end from user.
	cout << "Enter number from which you want to start the series: ";
	cin >> start;

	cout << "Enter number for which you want to end the serise: ";
	cin >> end; cout << endl;

	for (int i = 2; next <= end; i++)
	{
		if (start <= next)//print series if term >= the start value and printing it till it became <= end. 
		{
			cout << next << ", ";
		}

		t1 = t2;
		t2 = next;
		next = t1 + t2;
		
	}

	return 0;
}