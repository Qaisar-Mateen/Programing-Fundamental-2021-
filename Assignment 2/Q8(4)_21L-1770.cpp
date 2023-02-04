#include <iostream>
using namespace std;

int main()
{
	int t1=0,t2=1,next=0,sum=0;

	next=t1+t2;
	            //generating fibonacci series less than 4,000,000.
	for (int i=2;next<=4000000;i++)
	{        
	   t1=t2;
	   t2=next;
	   next=t1+t2;
	                //summing even fibonacci numbers.
	   if (next%2==0)
	   {
		   sum+=next;
	   }
	}
	                  //printing sum.
	cout<<"sum of fibonacci series less than 4 million is: "<<sum<<endl;


	system ("pause");
	return 0;
}