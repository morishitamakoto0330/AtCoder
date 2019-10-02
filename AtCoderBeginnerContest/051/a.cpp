#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int i;
	char c;
	string s;
	cin >> s;
	for (i = 0; i < s.size(); i++) {
		c = s[i];
		if (c == ',') {
			cout << " ";
		}
		else {
			cout << c;
		}
	}
	return 0;
}


