#include <iostream>
using namespace std;

void primefrequency(int[], int, int);

bool PrimeNumber(int);

int main() {
    int array[6] = { 0 }, size = 0, startin=0, endin=0;

    cout << "Enter size of array: ";
    cin >> size; cout << endl;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter no. in array: ";
        cin >> array[i];
    }
    cout << endl;

    cout << "Enter starting index: ";
    cin >> startin; 
    if (startin < 0)
    {
        startin = 0;
    }

    cout << "Enter ending index: ";
    cin >> endin; cout << endl;
    if (endin > size)
    {
        endin = size;
    }

    primefrequency(array, startin, endin);


    return 0;
}

void primefrequency(int a[], int start, int end)
{
    int f[7] = { 0 }, freq = 0;
    
    for (int i = start; i < end; i++)
    {
        freq = 0;
        if (f[i] != 1)
        {
            for (int j = start; j < end; j++)
            {
                if (a[i] == a[j])
                {
                    freq++;
                    f[j] = 1;
                }
            }
            bool prime = PrimeNumber(freq);
            if ( prime )
            {
                cout << "Frequency of " << a[i] << " is prime frequency which is '" << freq<<"' \n";
            }
        }
    }
}

bool PrimeNumber(int f) 
{
    bool isPrime = true;

    if ( f == 1) 
    {
        isPrime = false;
    }
    else {
        for (int i = 2; i <= f / 2; ++i) 
        {
            if (f % i == 0) 
            {
                isPrime = false;
                break;
            }
        }
    }
    return isPrime;
}