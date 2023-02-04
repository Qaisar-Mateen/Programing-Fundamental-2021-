#include <iostream>

using namespace std;

int main()
{
	int ac1 = 0, ac2 = 0, ac3 = 0, ac4 = 0, ac5 = 0, a = 0, bc1 = 0, bc2 = 0, bc3 = 0, bc4 = 0, bc5 = 0, b = 0, cc1 = 0, cc2 = 0, cc3 = 0, cc4 = 0, cc5 = 0, c = 0, dc1 = 0, dc2 = 0, dc3 = 0, dc4 = 0, dc5 = 0, d = 0, ec1 = 0, ec2 = 0, ec3 = 0, ec4 = 0, ec5 = 0, e = 0, as = 0, bs = 0, cs = 0, ds = 0, es = 1;


	                                                     //TAKING INPUTS.
	cout << "          FOR STUDENT-1         " << endl;
	cout << "Enter Roll# = "; cin >> a; cout << endl;
	cout << "Marks of course-1= "; cin >> ac1; cout << endl;	 
	cout << "Marks of course-2= "; cin >> ac2; cout << endl;
	cout << "Marks of course-3= "; cin >> ac3; cout << endl;
	cout << "Marks of course-4= "; cin >> ac4; cout << endl;
	cout << "Marks of course-5= "; cin >> ac5; cout << endl;

	cout << "          FOR STUDENT-2         " << endl;
	cout << "Enter Roll# = "; cin >> b; cout << endl;
	cout << "Marks of course-1= "; cin >> bc1; cout << endl;
	cout << "Marks of course-2= "; cin >> bc2; cout << endl;
	cout << "Marks of course-3= "; cin >> bc3; cout << endl;
	cout << "Marks of course-4= "; cin >> bc4; cout << endl;
	cout << "Marks of course-5= "; cin >> bc5; cout << endl;

	cout << "          FOR STUDENT-3         " << endl;
	cout << "Enter Roll# = "; cin >> c; cout << endl;
	cout << "Marks of course-1= "; cin >> cc1; cout << endl;
	cout << "Marks of course-2= "; cin >> cc2; cout << endl;
	cout << "Marks of course-3= "; cin >> cc3; cout << endl;
	cout << "Marks of course-4= "; cin >> cc4; cout << endl;
	cout << "Marks of course-5= "; cin >> cc5; cout << endl;

	cout << "          FOR STUDENT-4         " << endl;
	cout << "Enter Roll# = "; cin >> d; cout << endl;
	cout << "Marks of course-1= "; cin >> dc1; cout << endl;
	cout << "Marks of course-2= "; cin >> dc2; cout << endl;
	cout << "Marks of course-3= "; cin >> dc3; cout << endl;
	cout << "Marks of course-4= "; cin >> dc4; cout << endl;
	cout << "Marks of course-5= "; cin >> dc5; cout << endl;

	cout << "          FOR STUDENT-5         " << endl;
	cout << "Enter Roll# = "; cin >> e; cout << endl;
	cout << "Marks of course-1= "; cin >> ec1; cout << endl;
	cout << "Marks of course-2= "; cin >> ec2; cout << endl;
	cout << "Marks of course-3= "; cin >> ec3; cout << endl;
	cout << "Marks of course-4= "; cin >> ec4; cout << endl;
	cout << "Marks of course-5= "; cin >> ec5; cout << endl;

	                              //calculating aggregate of courses.
	as = ac1 + ac2 + ac3 + ac4 + ac5;
	bs = bc1 + bc2 + bc3 + bc4 + bc5;
	cs = cc1 + cc2 + cc3 + cc4 + cc5;
	ds = dc1 + dc2 + dc3 + dc4 + dc5;
	es = ec1 + ec2 + ec3 + ec4 + ec5;

                                //determining and showing highiest aggregate.
	if (as > bs && as > cs && as > ds && as > es)
	{
		cout << a << " has the highest aggregate of " << as << endl;
	}

	if (bs > as && bs > cs && bs > ds && bs > es)
	{
		cout << b << " has the highest aggregate of " << bs << endl;
	}
	
	if (cs > bs && cs > as && cs > ds && cs > es)
	{
		cout << c << " has the highest aggregate of " << cs << endl;
	}

	if (ds > bs && ds > as && ds > cs && ds > es)
	{
		cout << d << " has the highest aggregate of " << ds << endl;
	}

	if (es > bs && es > as && es > cs && es > ds)
	{
		cout << e << " has the highest aggregate of " << es << endl;
	}

}