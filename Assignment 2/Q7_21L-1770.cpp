#include <iostream>
using namespace std;

int main()
{
    int result = 0, multiple3=0 , multiple5 = 0;


    for (int c = 501; c < 3000; c++)
    {
        if ( (c % 3 == 0) && !((c % 3 == 0) && (c % 5 == 0)))
        {
            multiple3 += c;
            //cout << c<<"' ";
        }

        if ((c % 5 == 0) && !((c % 3 == 0) && (c % 5 == 0)))
        {
            multiple5 += c;
            //cout << c << "' ";
        }

    }
    cout << "Sum of natural numbers > 500 and < 3000 that are multiples of 3 or 5 but not both is: " << multiple3 + multiple5 << endl;

        return 0;
    }
