#include <iostream>
#include <vector>
#include <string>

using namespace std;

int main(void) {
	int i;
	string s;
	vector<string> ans;
	cin >> s;
	for (i = 0; i < s.size(); i++) {
		if (s[i] == '0') {
			ans.push_back("0");
		}
		else if (s[i] == '1') {
			ans.push_back("1");
		}
		else if (ans.size() != 0) {
			ans.pop_back();
		}
	}
	for (i = 0; i < ans.size(); i++) {
		cout << ans[i];
	}
	cout << endl;
	return 0;
}
