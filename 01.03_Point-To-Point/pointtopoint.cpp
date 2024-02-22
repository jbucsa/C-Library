//Point to Point
// Coded done by Justin Bucsa
#include <iostream>
#include <cmath>

using namespace std;

int main()
{
	bool undefined = false;
	double midx, midy, distance, x1, y1, x2, y2;
	cout<< "Enter x1 position: ";
		cin>> x1;
	cout<< "Enter y1 position: ";
		cin>> y1;	
	cout<< "Enter x2 position: ";
		cin>> x2;
	cout<< "Enter y2 position: ";
		cin>> y2;
	if (x2 -x1 == 0) undefined = true;
	midx = (x2 + x1) / 2;
	midy = (y2 + y1) / 2;
	distance = pow(x2 - x1,2.0) + pow(y2 - y1,2.0);
	distance = sqrt(distance);
	cout<< endl;
	cout<< "(" << x1 << "," << y1 << ")" << " & (" << x2 << "," << y2 << ")" << endl << endl;
	cout << "Midpoint + " << "(" << midx << "," << midy << ")" << endl;
	cout << "Distance = " << distance;
	return 0;
}
