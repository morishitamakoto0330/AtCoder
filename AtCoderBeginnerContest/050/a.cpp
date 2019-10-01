#include <iostream>

using namespace std;

int main(void) {
	int A, B, ans;
	char op;
	cin >> A >> op >> B;
	if (op == '+') {
		ans = A + B;
	}
	else {
		ans = A - B;
	}
	cout << ans << endl;
	return 0;
}



