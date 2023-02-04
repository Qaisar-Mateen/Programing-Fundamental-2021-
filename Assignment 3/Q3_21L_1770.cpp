#include <iostream>
using namespace std;

void swap(int&, int&);
void printArray(int[], int);
void arrangeInc(int[], int);
void arrangeDec(int[], int);
void occurancecheck(int[], int, int[]);

int main()
{
    int array[20] = { 0 }, distinct[20] = { 0 }, freq=1, unique[20]={0};

    for (int i = 0;i < 20; i++)
    {
        cout << " Enter no. in array and -99 to exit: ";
        cin >> array[i];
        if (array[i] == -99)
            break;
    }
                                     //save distinct element in distinct array.
    for (int i = 0; i < 20; i++)
    {
        int j;
        for (j = 0; j < i; j++)
        {
            if (array[i] == array[j])
                break;
        }
       
            if (array[i] == -99)
                break;
            else if (i == j)
            {
                distinct[i] = array[i];
            }
    }
    cout << endl;

    cout << "Dstinct Elements: ";

    arrangeInc(distinct, 20);
    printArray(distinct, 20);
    cout << endl;

    cout << "Unique Elements: ";

    occurancecheck(array, 20, unique);    //store unique element in unique array by checking frequency.
    arrangeDec(unique, 20);
    printArray(unique, 20);
    cout << endl;

    return 0;
}

void swap(int& a, int& b)
{
    int t = a;
    a = b;
    b = t;
}

void printArray(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        if (a[i] != 0)
            cout << a[i] <<", ";
    }
}

void arrangeInc(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int i = 0; i < s - 1; i++)
        {
            if (a[i] > a[i + 1])
            {
                swap(a[i], a[i + 1]);
            }   
        }
    }
}

void occurancecheck(int a[], int s, int b[])
{
    int f[20] = { 0 }, freq = 0;

    for (int i = 0; i < s; i++)
    {
        freq = 0;
        if ((f[i] != 1)&&(a[i] != -99))
        {
            for (int j = 0; j < s; j++)
            {
                if (a[i] == a[j])
                {
                    freq++;
                    f[j] = 1;
                }
            }

            if (freq == 1)
            {
                b[i] = a[i];
            }
        }
    }
}

void arrangeDec(int a[], int s)
{
    for (int i = 0; i < s; i++)
    {
        for (int j = i + 1; j < s; j++)
        {
            if (a[i] < a[j])
            {
                swap(a[i], a[j]);
            }
        }
    }
}