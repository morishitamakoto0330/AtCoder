#include <iostream>

using namespace std;

int main(void) {
	int X, Y, Z;
	int K, S;
	long long ans;
	// get input ---------------------------------
	cin >> K >> S;
	// count -------------------------------------
	ans = 0;
	for (X = 0; X <= K; X++) {
		for (Y = 0; Y <= K; Y++) {
			Z = S - X - Y;
			if (0 <= Z && Z <= K) {
				ans++;
			}
		}
	}
	// disp answer -------------------------------
	cout << ans << endl;
	return 0;
}

