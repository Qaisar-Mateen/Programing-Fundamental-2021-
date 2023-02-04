#include <iostream>

using namespace std;

int main()
{
	int n1 = 0, n2 = 0, result = 0;
	char op;

	                    //Taking inputs.
	cout << "Enter first number= ";
	cin >> n1; cout << endl;

	cout << "Enter operation= ";
	cin >> op; cout << endl;

	cout << "Enter second number= ";
	cin >> n2; cout << endl;

	                   //checking operator and implemanting it.
	if (op == '*')
	{
		result = n1 * n2;
	}

	else if (op == '+')
	{
		result = n1 + n2;
	}

	else if (op == '-')
	{
		result = n1 - n2;
	}

	else if (op == '/')
	{
		result = n1 / n2;
	}


	else if (op == '%')
	{
		if (n2 == 0)
		{
			cout << "Not Possible" << endl;
		}

		else
		{
			result = n1 % n2;
		}

	}

	cout << n1 << op << n2 << "=" << result << endl;

}