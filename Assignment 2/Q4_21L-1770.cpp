#include <iostream>
using namespace std;

int main()
{
    int num = 0, n1 = 0, n2 = 0, n3 = 0,product=0;

    cout << "Enter a number: ";
    cin >> num; cout << endl;

     //loop for checking product of 3-consecutive numbers if they are equal to the num than showing them, else no.
    for (int i = 1; i < num; i++)
    {
        n1 = i; n2 = n1 + 1; n3 = n2 + 1;

         product = n1 * n2 * n3;

        if (product == num)
        {
            cout << "Three consecutive numbers whose multiplication is equal to '" << num << "' are " << n1 << ", " << n2 << " and " << n3 << endl;

                //doing break, so the if statment out side the loop don't trigger every time. 
            break;
        }
    }

    if (product != num)
    {
        cout << "No" << endl;
    }

	return 0;
}