#include <iostream>
#include <math.h>

using namespace std;

int main ()
{
  float x1 = 0.0, x2 = 0.0, x3 = 0.0, y1 = 0.0, y2 = 0.0, y3 = 0.0, d1 = 0.0, d2 = 0.0, d3 = 0;

                         //taking inputs.
  cout << "\tFOR POINT-1" << endl;
  cout << "Enter abscissa (x)= ";
  cin >> x1;
  cout << "Enter ordinate (y)= ";
  cin >> y1;
  cout << endl;

  cout << "\tFOR POINT-2" << endl;
  cout << "Enter abscissa (x)= ";
  cin >> x2;
  cout << "Enter ordinate (y)= ";
  cin >> y2;
  cout << endl;

  cout << "\tFOR POINT-3" << endl;
  cout << "Enter abscissa (x)= ";
  cin >> x3;
  cout << "Enter ordinate (y)= ";
  cin >> y3;
  cout << endl;

                        //calculating distance between points.
  d1 = sqrt (pow ((x2 - x1), 2) + pow ((y2 - y1), 2));
  d2 = sqrt (pow ((x3 - x2), 2) + pow ((y3 - y2), 2));
  d3 = sqrt (pow ((x1 - x3), 2) + pow ((y1 - y3), 2));

                         //checking for scalene triangle.
  if (d1!=d2 && d1!=d3 && d2!=d3)
  {
      cout<<"\tThese points are the coordinates of a SCALENE TRIANGLE      "<<endl;
  }
                          //checking for right triangle.
  if (pow(d1, 2) == pow(d2, 2) + pow(d3, 2) || pow(d2, 2) == pow(d1, 2) + pow(d3, 2) || pow(d3, 2) == pow(d1, 2) + pow(d2, 2))
  {
      cout << "Typed three numbers are pythagorean triple" << endl;
  }

  return 0;
}
