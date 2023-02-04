#include <iostream>
using namespace std;

int main()
{                                 //all month days stored in array.
    int monthdays[12] = { 31,28,31,30,31,30,31,31,30,31,30,31 };
    int p_day = 0, p_month = 0, p_year = 0, b_day = 0, b_month = 0, b_year = 0, days = 0, month = 0, year = 0;
    bool wrong = false;


    cout << "\t FOR BIRTH DATE \n";  //using do-while loop for validations
    do
    {
        cout << " Enter birth date(year): ";
        cin >> b_year;
        if (0 >= b_year)
        {
            wrong = true;
        }

    } while (wrong);

    do
    {
        cout << " Enter birth date(month): ";
        cin >> b_month;
        if((b_month > 12) || (b_month <= 0))
        {
            wrong = true;
        }

    } while (wrong);

    do
    {
        cout << " Enter birth date(day): ";
        cin >> b_day; cout << endl;
        if ((b_day > 31) || (b_day <= 0))
        {
            wrong = true;
        }

    } while (wrong);

    cout << "\t FOR PRESENT DATE \n";
    do
    {
        cout << " Enter present date(Year): ";
        cin >> p_year;
        if ((b_year > p_year)||(p_year>=2022))
        {
            wrong = true;
        }

    } while (wrong);
    
    do
    {
        cout << " Enter present date(month): ";
        cin >> p_month;
        if ((p_month > 12) || (p_month <= 0))
        {
            wrong = true;
        }

    } while (wrong);

    do
    {
        cout << " Enter present date(day): ";
        cin >> p_day; cout << endl;
        if ((b_day > 31) || (b_day <= 0))
        {
            wrong = true;
        }

    } while (wrong);

              //Age calculating part.
    year = p_year - b_year;
    if (p_month >= b_month)
    {
        month = p_month - b_month;
    }
    else       //for present month less than birth month.
    {
        days = p_day - b_day;
    }
    if (p_day >= b_day)
    {
        days = p_day - b_day;
    }
    else     //for present day less than birth day.
    {
        month--;
        days = monthdays[p_month - 1] - (b_day - p_day);
    }

    cout << "your age is: " << year << " years " << month << " months and " << days << " days. " << endl;;

    return 0;
}