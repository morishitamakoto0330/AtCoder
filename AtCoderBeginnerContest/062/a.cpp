#include <iostream>
#include <string>
#include <vector>

#define G1 1
#define G2 2
#define G3 3

using namespace std;

int main(void) {
	int i, x, y;
	string ans;
	vector<int> group(12);
	cin >> x >> y;
	ans = "No";
	group[0] = G1;
	group[2] = G1;
	group[4] = G1;
	group[6] = G1;
	group[7] = G1;
	group[9] = G1;
	group[11] = G1;
	group[3] = G2;
	group[5] = G2;
	group[8] = G2;
	group[10] = G2;
	group[1] = G3;
	if (group[x - 1] == group[y - 1]) {
		ans = "Yes";
	}
	cout << ans << endl;
	return 0;
}


