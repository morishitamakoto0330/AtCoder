#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int i, j, tmp;
	int N, M;
	vector<int> T, P, X, ans;
	// get input ----------------------------------------
	cin >> N;
	for (i = 0; i < N; i++) {
		cin >> tmp;
		T.push_back(tmp);
	}
	cin >> M;
	for (i = 0; i < M; i++) {
		cin >> tmp;
		P.push_back(tmp-1);
		cin >> tmp;
		X.push_back(tmp);
	}
	// calc ---------------------------------------------
	for (i = 0; i < M; i++) {
		tmp = 0;
		for (j = 0; j < N; j++) {
			if (j == P[i]) {
				tmp += X[i];
			}
			else {
				tmp += T[j];
			}
		}
		ans.push_back(tmp);
	}
	// disp answer --------------------------------------
	for (i = 0; i < M; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}



