#include <iostream>
using namespace std;

int main()
{
	int x = 100, y;
	                
	while (x > 0) 
	{                 //input y and loop if y=25.
		cin >> y;
		if (y == 25)
        {
			x--;
			continue;
		}
		                //taking x and printing it.
		else
		{
			cin >> x;
			cout << "x = " << x << endl;
		}
	}

}