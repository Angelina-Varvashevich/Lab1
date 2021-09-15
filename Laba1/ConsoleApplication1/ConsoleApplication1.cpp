#include <iostream> // number 3
#include <iomanip>
#include <cmath>

using namespace std;

int main()
{
	int k , t;
	double x;
	cout << "Input x: ";
	cin >>  x;
	cout << "Input k (k>1): ";
	cin >> k ;
	
	cout << "Precision of the calculation results: ";
	cin >> t;

	double b = cos(x);
	
	cout << " cos(x) = " << fixed << setprecision(t) << b << endl;

	long double a = 2 * acos(-1);
	cout << fixed << setprecision(t);
	while (x > 35) {
		x -= a;
	 } 

	 
	double e = (pow(10, -k)) /2; // e - epsilon 
  long double plot = 1.0; 
	 double sum = 1.0;
	int n=1;

	while ( (fabs(plot)) > e) {
		plot *= ( (-1)* x * x) / ((2 * n - 1) * 2 * n);
		sum += plot;
		n++;
	}
	
cout << " Taylor series = " << fixed<<setprecision(t) << sum  << endl;
double razn = b - sum;

cout << " Difference = " << fixed << setprecision(t) << fabs(razn) ;

	return 0;
}

	