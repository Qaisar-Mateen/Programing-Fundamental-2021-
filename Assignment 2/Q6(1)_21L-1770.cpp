#include <iostream>
using namespace std;

            //function signature.
bool primeTest(int n);
   
int main() 
{
    int n = 0;
    
    cout << "Enter a number: ";
    cin >> n;
    //checking for -ve value.
    if (n >= 0)                                                  //1=true, 0=false.
        cout << "is " << n << "  a prime number? " << (primeTest(n) ? "(Yes)True" : "(No)False") << endl;

    //for negative no.
    else
        cout << "invalid input" << endl;
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

        i++;
    }

    return true;
}