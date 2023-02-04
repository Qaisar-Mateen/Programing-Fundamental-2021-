
#include <iostream>

using namespace std;

int main()
{
    double n1, n2;

    cout << "                 Before Swap                    " << endl;
    cout<<"enter first number: ";
    cin>>n1;
    
    cout<<"enter second number: ";
    cin>>n2;

                       //Swaping by addition.
    n1=n1+n2;
    n2=n1-n2;
    n1=n1-n2;
    
    cout<<"                  After Swap                      "<<endl;
    cout<<"first number: "<<n1<<endl;
    cout<<"second number: "<<n2<<endl;
}
