#include <iostream>

using namespace std;

int main()

{
    int num=0,d1=0,d2=0,d3=0,d4=0,d5=0,d6=0,sum=0;
    
                           //Taking Inputs.
    cout<<"enter a six-digit number: ";
    cin>>num ;
    cout << endl;

                          //Seprating digits and taking sum.
    d1=num%10;
    
    num=num/10;
    d2=num%10;
    
    num=num/10;
    d3=num%10;
    
    num=num/10;
    d4=num%10;
    
    num=num/10;
    d5=num%10;
    
    num=num/10;
    d6=num%10;
    
                         //Checking if number is greater than 6-digit.
    if(num/10==0)
    {
      sum=d1+d2+d3+d4+d5+d6;
      cout << "sum of it's digits is= " << sum << endl;
    }
    
    else
    {
      cout<<"number is greater than six-digit";
    }
    
}
