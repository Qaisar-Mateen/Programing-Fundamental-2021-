#include <iostream>
using namespace std;

int main()
{
	int height=0,row=0;
	char symbol;
	                //taking size and symbol from user.
	cout<<"Enter height of the pattern: ";
	cin>>height;
	cout<<"Enter symbol: ";
	cin>>symbol;
	               //loop for printing increasing part of shape.
	for (row=1;row<=height;row++)
	{
	  for(int a=1; a<=row;a++)
	  {
		  cout<<symbol;
	  }
	 cout<<endl;
	}
	                //loop for printing decreasing part of shape.
	for(row=height-1;row>0;row--)
	{
	  for(int b=row;b>0;b--)
	  {
	  cout<<symbol;
	  }
	 cout<<endl;
	}

	system ("pause");
    return 0;
}