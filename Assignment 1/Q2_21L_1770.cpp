#include <iostream>

using namespace std;

int main()
{
    int n1 = 0, n2 = 0;

              //taking inputs.
    cout << "Enter first integer: ";
    cin >> n1;

    cout << "Enter second integer: ";
    cin >> n2;

              //checking for multiples.
    if (n1 >= n2 && n1 % n2 == 0)
    {
        cout << n1 << " is multiple of " << n2 << endl;
    }

    else if (n2 > n1 && n2 % n1 == 0)
    {
        cout << n2 << " is multiple of " << n1 << endl;
    }

    else
    {
        cout << "entered numbers are not multiples of each others" << endl;
    }


}
