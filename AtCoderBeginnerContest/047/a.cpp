#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int a, b, c;
	string s;
	cin >> a >> b >> c;
	s = "No";
	if (a + b == c || a + c == b || b + c == a) {
		s = "Yes";
	}
	cout << s << endl;
	return 0;
}
