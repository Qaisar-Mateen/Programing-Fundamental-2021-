#include<iostream>
using namespace std;

int main()
{
	int date=0,month=0;
	char end='n',dummy;

	for( ;end !=  'd'  || end != 'D'; )
	{
	  cout<<"enter date of birth and month (in number:format dd,mm): ";
	  cin>>date>>dummy>>month;

	  if ( (21 <=date && 3 ==month) || (19 >=date && 4==month) )
	  {
	  cout<<"Your sign is Aries"<<endl;     
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }

	  else if ( (20 <=date && 4 ==month) || (20 >=date && 5==month) )
	  {
	  cout<<"Your sign is Taurus"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }
	
	  else if ( (21 <=date && 5 ==month) || (21 >=date && 6==month) )
	  {
	  cout<<"Your sign is Gemini"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }
	
	   else if ( (22 <=date && 6 ==month) || (22 >=date && 7==month) )
	  {
	  cout<<"Your sign is Cancer"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }
	
	  else if ( (23 <=date && 7 ==month) || (23 >=date && 8==month) )
	  {
	  cout<<"Your sign is Leo"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }

	   else if ( (23 <=date && 7 ==month) || (22 >=date && 8==month) )
	  {
	  cout<<"Your sign is Leo"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }
	
	  else if ( (23 <=date && 8 ==month) || (22 >=date && 9 ==month) )
	  {
	  cout<<"Your sign is Virgo"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }

	    else if ( (23 <=date && 9 ==month) || (22 >=date && 10 ==month) )
	  {
	  cout<<"Your sign is Libra"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }

	else if ( (23 <=date && 10 ==month) || (21 >=date && 11 ==month) )
	  {
	  cout<<"Your sign is Scorpio"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }
	
		else if ( (22 <=date && 11 ==month) || (21 >=date && 12 ==month) )
	  {
	  cout<<"Your sign is Sagittarius"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }
	
	else if ( (22 <=date && 12 ==month) || (19 >=date && 1 ==month) )
	  {
	  cout<<"Your sign is Capricorn"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }

		else if ( (20 <=date && 1 ==month) || (18 >=date && 2 ==month) )
	  {
	  cout<<"Your sign is Aquarius"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }

      else if ( (19 <=date && 2 ==month) || (20 >=date && 3 ==month) )
	  {
	  cout<<"Your sign is Pisces"<<endl;
	  cout<<"if You want to finish type 'd'or'D' else type any character: ";cin>>end;
	  }

	}

	system ("pause");
    return 0;
}