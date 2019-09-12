#include <iostream>
#include <string>

#define N 1000

using namespace std;

int main(void) {
	int i, start, end, sub_s_len, type;
	int count[N], index[N];
	char c_tmp;
	string s;
	// get input -------------------------------
	cin >> s;
	// init array ------------------------
	for (i = 0; i < N; i++) {
		count[i] = 0;
		index[i] = 0;
	}
	// search ----------------------------------
	start = -1;
	end = -1;
	type = 0;
	for (i = 0; i < s.size(); i++) {
		c_tmp = (char)s[i];
		if (count[c_tmp] == 0) {
			index[c_tmp] = i;
			type++;
		}
		count[c_tmp]++;
		sub_s_len = i - index[c_tmp] + 1;
		if (i >= 2 && sub_s_len >= 2 && type >= 2 && count[c_tmp] != 0 && count[c_tmp] > (sub_s_len / 2)) {
			if (index[c_tmp] != 0) {
				start = index[c_tmp];
				end = i + 1;
				break;
			}
			else if (i + 2 <= s.size()) {
				start = index[c_tmp] + 1;
				end = i + 2;
				break;
			}
		}
	}
	// disp answer -----------------------------
	cout << start << " " << end << endl;
	return 0;
}

