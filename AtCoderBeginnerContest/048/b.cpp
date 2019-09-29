#include <iostream>

using namespace std;

long long f(long long n, long long x);

int main(void) {
	long long ans;
	long long i;
	long long a, b, x;
	// get input ----------------------------------
	cin >> a >> b >> x;
	// calc ---------------------------------------
	ans = f(b, x) - f(a - 1, x);
	// disp answer ---------------------------------
	cout << ans << endl;
	return 0;
}

long long f(long long n, long long x) {
	if (n == -1) {
		return 0;
	}
	return n / x + 1;
}
