#include <iostream>
#include <string>

using namespace std;

int main(void) {
	int i;
	string W, ans;
	// get input ------------------------
	cin >> W;
	ans = "";
	// exclude "aiueo" ------------------
	for (i = 0; i < W.size(); i++) {
		if (W[i] != 'a'
			&& W[i] != 'i'
			&& W[i] != 'u'
			&& W[i] != 'e'
			&& W[i] != 'o'
		) {
			ans += W[i];
		}
	}
	// disp answer ---------------------
	cout << ans << endl;
	return 0;
}

