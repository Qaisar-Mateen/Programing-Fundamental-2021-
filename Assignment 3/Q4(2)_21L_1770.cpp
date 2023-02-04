#include<iostream>
using namespace std;

void swap(int&, int&);

int main()
{
    char array[100];
    int size = 0;

    for (int i = 0; i < 100; i++)
    {
        cout << "Enter 'b' or 'a' or 'm' in array: ";
        cin >> array[i];
        if ((array[i] != 'm') && (array[i] != 'a') && (array[i] != 'b'))
        {
            cout << "/t INVALID INPUT...";
            goto end;
        } 
    }
    cout << endl;
                        //loop to move b on left side of array.
    for (int i = 0; i < size; i++)
    {
        for (int i = 0; i < size - 1; i++)
        {
            if (array[i] != 'b')
            {
                swap(array[i], array[i + 1]);
            }
        }
    }
                         //loop to move a on right side.
    for (int i = 0; i < size; i++)
    {
        for (int j = i + 1; j < size; j++)
        {
            if (array[i] == 'a')
            {
                swap(array[i], array[j]);
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
        {
            cout << array[i] << ", ";
        }
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