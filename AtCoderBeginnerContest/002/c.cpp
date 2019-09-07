#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

int main(void) {
	int Ax, Ay, Bx, By, Cx, Cy;
	double a, b, c, d;
	double ans;
	// get input -------------------------------
	cin >> Ax >> Ay >> Bx >> By >> Cx >> Cy;
	// calc area ------------------------------
	a = (double)(Bx - Ax);
	b = (double)(By - Ay);
	c = (double)(Cx - Ax);
	d = (double)(Cy - Ay);

	ans = a * 0.5 * d;
	ans -= b * 0.5 * c;
	if (ans < 0) ans *= -1.0;
	// disp answer ----------------------------
	cout << fixed << setprecision(2) << ans << endl;
	return 0;
}

