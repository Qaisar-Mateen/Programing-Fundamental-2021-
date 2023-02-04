#include <iostream>

using namespace std;

int main()
{
  int i1=0,i2=0,i3=0;
  
              //taking inputs.
  cout<<"Enter first intiger= ";
  cin>>i1;cout<<endl;
  
  cout<<"Enter second intiger= ";
  cin>>i2;cout<<endl;
  
  cout<<"Enter third intiger= ";
  cin>>i3;cout<<endl;
  
                //determining and arranging in ascending and descending order.
    if (i1 > i2 && i1 > i3 && i2 > i3)
  {
      cout<<"Ascending order= "<<i3<<" , "<<i2<<" , "<<i1<<endl;
      cout<<"Descending order= "<<i1<<" , "<<i2<<" , "<<i3<<endl;
  }
    
    else if (i1 > i2 && i1 > i3 && i3 > i2)
  {
      cout<<"Ascending order= "<<i2<<" , "<<i3<<" , "<<i1<<endl;
      cout<<"Descending order= "<<i1<<" , "<<i3<<" , "<<i2<<endl;
  }
  
    else if (i2 > i1 && i2 > i3 && i1 > i3)
  {
      cout<<"Ascending order= "<<i3<<" , "<<i1<<" , "<<i2<<endl;
      cout<<"Descending order= "<<i2<<" , "<<i1<<" , "<<i3<<endl;
  }
  
    else if (i2 > i1 && i2 > i3 && i3 > i1)
  {
      cout<<"Ascending order= "<<i1<<" , "<<i3<<" , "<<i2<<endl;
      cout<<"Descending order= "<<i2<<" , "<<i3<<" , "<<i1<<endl;
  }
  
    else if (i3 > i1 && i3 > i2 && i2 > i1)
  {
      cout<<"Ascending order= "<<i1<<" , "<<i2<<" , "<<i3<<endl;
      cout<<"Descending order= "<<i3<<" , "<<i2<<" , "<<i1<<endl;
  }
  
     else if (i3 > i1 && i3 > i2 && i1 > i2)
  {
      cout<<"Ascending order= "<<i2<<","<<i1<<","<<i3<<endl;
      cout<<"Descending order= "<<i3<<","<<i1<<","<<i2<<endl;
  }
    else 
      cout<<"\tINVALID INPUT "<<endl;
      
   return 0;
}