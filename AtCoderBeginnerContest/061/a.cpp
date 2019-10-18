#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int A, B, C;
	string ans;
	cin >> A >> B >> C;
	ans = "No";
	if (A <= C && C <= B) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}


