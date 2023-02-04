#include <iostream>
using namespace std;

int main()
{
	int n = 0, t1 = 0, t2 = 1, next = 0;

	cout << "Enter a number for which fibonacci series should be less: ";
	cin >> n;                  //recesiving value from user, from which fibonanci number should be less.

	cout << "Fibonacci Series: " << t1 << ", " << t2;
	next = t1 + t2;

	for(int i=2;next<= n;i++)//loop for fibonacci series less than the entered number.
	{
		cout << ", " << next;
		t1 = t2;
		t2 = next;
		next = t1 + t2;
	}

	return 0;
}
