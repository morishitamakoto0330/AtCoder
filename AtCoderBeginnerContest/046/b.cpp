#include <iostream>

using namespace std;

int main(void) {
	long long ans;
	int i;
	int N, K;
	// get input -----------------------------
	cin >> N >> K;
	// count penki ---------------------------
	ans = K;
	for (i = 1; i < N; i++) {
		ans *= (K - 1);
	}
	// disp answer ---------------------------
	cout << ans << endl;
	return 0;
}

