#include <iostream>
using namespace std;

int main()
{
	int i = 0, k=1,t=0;
	int term [200000] ;//array to store terms.

	term[0] = 0;
	term[1] = 1;

	cout << "How many Fibonacci no. do you want to ask: ";
	cin >> k; cout << endl;

	for (int j=1;j<=k;j++)//user will determinate repetation of this loop.
	{
		cout << "Which Fibonacci term do you want to know: ";
		cin >> t;
		for (int i = 2; i <= t; i++)//storing fibonacci terms in array.
		{
			term[i] = term[i - 1] + term[i - 2];
		}

		cout << "\t F(" << t << ")= " << term[t] << endl;//printing the required term from the array.
	}


	return 0;
}