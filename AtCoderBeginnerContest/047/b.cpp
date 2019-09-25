#include <iostream>

using namespace std;

int main(void) {
	int area, i, X_LOW, X_HIGH, Y_LOW, Y_HIGH;
	int W, H, N;
	int x, y, a;
	// get input --------------------------------
	cin >> W >> H >> N;
	X_LOW = 0;
	X_HIGH = W;
	Y_LOW = 0;
	Y_HIGH = H;
	for (i = 0; i < N; i++) {
		cin >> x >> y >> a;
		if (a == 1) {
			if (X_LOW < x) {
				X_LOW = x;
			}
		}
		else if (a == 2) {
			if (X_HIGH > x) {
				X_HIGH = x;
			}
		}
		else if (a == 3) {
			if (Y_LOW < y) {
				Y_LOW = y;
			}
		}
		else {
			if (Y_HIGH > y) {
				Y_HIGH = y;
			}
		}
	}
	// calc area ----------------------------------
	if (X_HIGH > X_LOW && Y_HIGH > Y_LOW) {
		area = (X_HIGH - X_LOW) * (Y_HIGH - Y_LOW);
	}
	else {
		area = 0;
	}
	// disp answer --------------------------------
	cout << area << endl;
	return 0;
}
