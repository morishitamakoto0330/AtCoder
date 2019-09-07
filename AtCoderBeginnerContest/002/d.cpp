#include <iostream>
#include <vector>
#include <cmath>
#include <algorithm>
#include <set>
#include <iterator>

using namespace std;

int main(void) {
	int N, M, i, j, k;
	int ans, i_tmp, x_tmp, y_tmp;
	bool isOK;
	pair<int, int> pair_tmp;
	vector<int> group;
	vector<pair<int, int>> xy, group_xy, tmp;
	// get input --------------------------------
	cin >> N >> M;
	for (i = 0; i < M; i++) {
		cin >> x_tmp >> y_tmp;
		pair_tmp = make_pair(x_tmp, y_tmp);
		xy.push_back(pair_tmp);
	}
	// calc ------------------------------------
	ans = 1;
	for (i = (int)(pow(2.0, N)); i > 0; i--) {
		group.clear();
		group_xy.clear();
		i_tmp = i;
		for (j = 0; j < N; j++) {
			if ((i_tmp & 0x01) == 0x01) {
				group.push_back(j);
			}
			i_tmp = i_tmp >> 1;
		}
		for (j = 0; j < group.size(); j++) {
			for (k = j + 1; k < group.size(); k++) {
				pair_tmp = make_pair(group[j], group[k]);
				group_xy.push_back(pair_tmp);
			}
		}
		isOK = false;
		for (j = 0; j < group_xy.size(); j++) {
			isOK = false;
			for (k = 0; k < M; k++) {
				if (group_xy[j].first == xy[k].first &&
					group_xy[j].second == xy[k].second
					) {
					isOK = true;
				}
			}
			if (!isOK) {
				break;
			}
		}
		if (isOK) {
			if (ans < group.size()) {
				ans = group.size();
			}
		}
	}
	// disp answer ----------------------------
	cout << ans << endl;
	return 0;
}


