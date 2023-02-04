#include<iostream>
using namespace std;

void swap(int& ,int&);

int main()
{
    int array[8] ={0}, size=0;

    cout << "Enter size of array: ";
    cin >> size;

    for (int i = 0; i < size; i++)
    {
        cout << "Enter binary no. in array: ";
        cin >> array[i];

        if ((array[i] != 0) && (array[i] != 1))
        {
            cout << "/t INVALID INPUT...";
            goto end;
        }
    }

    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] == 1)
            {
                swap(array[i], array[i + 1]);
            }
        }
    }

    cout << "\nSegregated Array is: ";

    for (int i = 0; i < size; i++)
    {
        if (size == (i + 1))
        {
            cout << array[i];
        }
        else
            cout << array[i] << ", ";
    }
    cout << endl;

    end:
	return 0;
}

void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}