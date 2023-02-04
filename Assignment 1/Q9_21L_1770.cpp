
#include <iostream>

using namespace std;

int main()
{
    char ch;
                   //Taking input from user.
    cout<<"enter any character: ";
    cin>>ch;
    cout << endl;

                   //Deciding whether it is digit, character or special character.
    if('0'<=ch && '9'>=ch)
    {
        cout<<" Entered Character is a Digit "<<endl;
    }
    
    else if(('a'<=ch && 'z'>=ch) || ('A'<=ch && 'Z'>=ch))
    {
        cout<<" Entered Character is an Alphabet "<<endl;
    }
    
    else
    {
        cout<<" Entered Character is a Special Character "<<endl;
    }
}
