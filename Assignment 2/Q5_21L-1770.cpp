#include <iostream>
using namespace std;

int main()
{
    int num = 0, odd = 0, even = 0;

    while (num != -1)     //loop for taking input from user till he types -1.
    {
        cout << "Enter a number: ";
        cin >> num;

        if (num != -1)
        {
            if (num % 2 == 0)//check for even.
            {
                even++;
            }

            else//for odd.
            {
                odd++;
            }
        }
    }
                    //printing result.
    cout << "Frequency of even no.: " << even << endl;

    cout << "Frequency of odd no.: " << odd << endl;

    return 0;
}