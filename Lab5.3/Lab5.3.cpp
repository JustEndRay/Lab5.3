#include <iostream>
#include <cmath>
#include <iomanip> 
using namespace std;
long double fact(int N)
{
	if (N < 0)
		return 0;
	if (N == 0)
		return 1;
	else
		return N * fact(N - 1);
}
double p(const double x);
int main()
{
	double gp, gk, z;
	int n;
	cout << "gp = "; cin >> gp;
	cout << "gk = "; cin >> gk;
	cout << "n  = "; cin >> n;
	double dg = (gk - gp) / n;
	double g = gp;
	cout << fixed;
	cout << "--------------------------" << endl;
	cout << "|" << setw(5) << "h" << "     |" << setw(10) << "r" << "   |" << endl;
	cout << "--------------------------" << endl;
	while (g <= gk)
	{
		z = p(1 + g * g - 2 * g) + 2 * p(1 + p(g * g) - 2 * p(1) * p(1));
		cout << "|" << setw(7) << setprecision(2) << g << "   |" << setw(10) << setprecision(5) << z << "   |" << endl;
		g += dg;
	}
	cout << "--------------------------" << endl;
	return 0;
}double p(const double x)
{
	if (abs(x) >= 1)
		return((1 - sin(x) * sin(x)) / (exp(x)));
	else {
		double S = 1 / (1 + x); int j = 0; double a = 1;
		S *= a;
		do {
			j++;
			double R = (pow(x, j + 1)) / fact(2 * j + 1);
			a *= R;
			S += a;
		} while (j < 7);
		return S;
	}

}