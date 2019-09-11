#include <iostream>

#define C 1000000007

using namespace std;

int H, W, A, B;
int ans;

void move(int h, int w);

int main(void) {
	// get input ----------------------------------
	cin >> H >> W >> A >> B;
	// search -------------------------------------
	ans = 0;
	move(1, 1);
	// disp answer --------------------------------
	cout << ans << endl;

	return 0;
}

void move(int h, int w) {
	//cout << "(" << h << "," << w << ")" << endl;
	// check NG zone -----------------------------
	if (h > (H - A) && w <= B ) {
		return;
	}
	// check height ------------------------------
	if ((h + 1) <= H) {
		move(h + 1, w);
	}
	// check width -------------------------------
	if ((w + 1) < W) {
		move(h, w + 1);
	}
	else {
		ans++;
		ans %= C;
	}

	return;
}
