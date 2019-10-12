#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string ans;
	string A, B;
	char a, b;
	cin >> A >> B;
	if (A.size() > B.size()) {
		ans = "GREATER";
	}
	else if (A.size() < B.size()) {
		ans = "LESS";
	}
	else {
		a = A[0];
		b = B[0];
		if (a > b) {
			ans = "GREATER";
		}
		else if (a < b) {
			ans = "LESS";
		}
		else {
			ans = "EQUAL";
		}
	}
	cout << ans << endl;
	return 0;
}



