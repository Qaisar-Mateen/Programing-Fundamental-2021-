#include <iostream>
using namespace std;
          //function signature.
bool primeTest(int);

int main()
{
    int h = 0,n=0;

    cout << "Enter number of times you want to ask: ";
    cin >> h; cout << endl;

    for (int i = 1; i <= h; i++) //user determine durition of this loop.
    {
        cout << "Enter a no. about which you want to know: ";
        cin >> n; cout << endl;

        cout << "is '" << n << "' a prime number? " << (primeTest(n) ? "(Yes)True" : "(No)False")<<"\n";//checking prime property of the entered number.
    }
    
    return 0;
}

        //function for checking prime number.
bool primeTest(int n) 
{
    if (n == 1) 
    {
        return false;
    }

    for (int i = 2; i * i <= n; i++)
    {

        if (n % i == 0) 
        {

            return false;
        }
        
    }

    return true;
}