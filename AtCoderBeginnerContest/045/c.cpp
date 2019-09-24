#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
	int i, count, bit;
	long long ans, tmp;
	string S, s;
	// get input ----------------------------------------------
	cin >> S;
	// sum ----------------------------------------------------
	ans = 0;
	count = 0;
	while (count < pow(2, S.size() - 1)) {
		s = S[0];
		tmp = stoll(s);
		for (i = 1; i < S.size(); i++) {
			bit = pow(2, i - 1);
			bit &= count;
			if (bit != 0) {
				ans += tmp;
				tmp = 0;
			}
			else {
				tmp *= 10;
			}
			s = S[i];
			tmp += stoll(s);
		}
		ans += tmp;
		count++;
	}
	// disp answer ---------------------------------------------
	cout << ans << endl;
	return 0;
}


