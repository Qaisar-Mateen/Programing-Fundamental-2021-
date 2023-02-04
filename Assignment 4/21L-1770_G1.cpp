/*     Assignment no. 4
       Name: Qaisar Mateen
       Roll#:21L-1770
       Section: G1           
       Note: Put the input.txt file in the same place as the .cpp while running the program */

#include<iostream>
#include<fstream>//library for file handling.
using namespace std;

int length(char[]);//function to find length of strings.
bool isImperfect_Palindrome(char[], int);//function to check imperfect-palindrome.
void areSuper_Anagrams(char[], int, char[], int);//function to check super-anagram pair.

int main()
{
    char string1[40] = { '\0' }, string2[40] = { '\0' };
    int len1 = 0, len2 = 0;

    ifstream infile;

    infile.open("input.txt");

    if (!infile)
        cout << "\t Can't Open The File...  :( \n";

    else
    {

        cout << "\t\t\t\t_-_-_-_-_-_-_-OUTPUT_-_-_-_-_-_-_-\n";

        while (!infile.eof())
        {

            infile >> string1 >> string2;

            if(!infile.eof())
            {
                len1 = length(string1);
                len2 = length(string2);

                if (isImperfect_Palindrome(string1, len1)) //checking imperfect-palindrome for first word and giving output accordingly. 
                    cout << "\t\t\t\t||\tYES";

                else
                    cout << "\t\t\t\t||\tNO";

                if (isImperfect_Palindrome(string2, len2)) //checking imperfect-palindrome for second word and giving output accordingly.
                    cout << "\tYES";

                else
                    cout << "\tNO";

                areSuper_Anagrams(string1, len1, string2, len2);
       
            }

        }

    }

    cout << "\t\t\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-\n";

    infile.close();

    return 0;
}

int length(char str[])
{
    int l = 0;
    for (int i = 0; str[i] != '\0'; i++)
    {
        l++;
    }

    return l;
}

bool isImperfect_Palindrome(char str[], int len)
{
   
    int num = 0, freq=0;

    for (int i = 0; i < len / 2; i++)
    {

        if (str[i] == str[len - i - 1])
        {

            freq++; //freq is used to count no. of same elements.
            if (freq == (len / 2))
                return false;

        }

        if (str[i] != str[len - i - 1])
        {

            num++; //num is used to count no. of different elements.
            if (num >= 2)
            {
                return false;
            }

        }

    }

    return true;
}

void areSuper_Anagrams(char str1[], int len1, char str2[], int len2)
{

    bool found = false, not_found = false;

                           //This condition will make sure that there is atmost frequency difference of 2.
    if ((len1 == len2) || (len1 + 1 == len2) || (len1 + 2 == len2) || (len1 - 1 == len2) || (len1 - 2 == len2))
    {

        for (int i = 0; i < len1; i++)
        {

            found = false;
            for (int j = 0; j < len1; j++)
            {

                if (str1[i] == str2[j])
                {
      
                    found = true;
                    break;

                }

            }

            if (!found)
            {
                not_found = true;
                break;
            }

        }
        if (not_found)
            cout << "\tNO\t||";

        else if (found)
            cout << "\tYES\t||";

    }
    else
        cout << " \tNO\t||";

    cout << endl;

}