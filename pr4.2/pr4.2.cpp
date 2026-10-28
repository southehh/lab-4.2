#include <iostream>
#include <iomanip>
#include <cmath>

using namespace std;

int main() {

	double x,y,a,b, xp, kx,dx;
	cout << "xp = "; cin >> xp;
	cout << "kx = "; cin >> kx;
	cout << "dx = "; cin >> dx;
	
	cout << "---------------------------" << endl;
	cout << "|" << setw(5) << "x" << " |"
		<< setw(7) << "y" << " |" << endl;
	cout << "---------------------------" << endl;

	x = xp;
	while (x <= kx) {
		a = tan(x) + 1;
		if (x <= -5)
			b = pow(exp(1), x / (abs(1 - x)));
		if (x > -5 && x <= 3)
			b = 3.2 + log(1.8 * x * x);
		else
			b = abs(x) * sqrt(x);
		y = a - b;
		cout << "|" << setw(7) << setprecision(3) << x
			<< " |" << setw(10) << setprecision(3) << y
			<< " |" << endl;
		x += dx;
	}


	cin.get();
	return 0;
}