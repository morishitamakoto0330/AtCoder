#include <iostream>

#define N 101

using namespace std;

int main(void) {
	int i, count;
	int a, b, c;
	int penki[N];
	// get input -----------------------------
	cin >> a >> b >> c;
	// init penki ----------------------------
	for (i = 0; i < N; i++) {
		penki[i] = 0;
	}
	// buy penki -----------------------------
	penki[a]++;
	penki[b]++;
	penki[c]++;
	// count penki ---------------------------
	count = 0;
	for (i = 0; i < N; i++) {
		if (penki[i] != 0) {
			count++;
		}
	}
	// disp answer ---------------------------
	cout << count << endl;
	return 0;
}

