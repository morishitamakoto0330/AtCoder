#include <iostream>

using namespace std;

int main(void) {
	long long count;
	long long i;
	long long a, b, x;
	// get input ----------------------------------
	cin >> a >> b >> x;
	// count --------------------------------------
	count = (b - a + 1) / x;
	// disp answer ---------------------------------
	cout << count << endl;
	return 0;
}