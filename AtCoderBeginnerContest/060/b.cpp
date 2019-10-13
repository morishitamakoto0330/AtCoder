#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string ans;
	int i, surplus, surplus_tmp;
	int A, B, C;
	cin >> A >> B >> C;
	surplus = A % B;
	ans = "NO";
	for (i = 1; i <= B; i++) {
		surplus_tmp = surplus * i % B;
		if (surplus_tmp == C) {
			ans = "YES";
			break;
		}
	}
	cout << ans << endl;
	return 0;
}




