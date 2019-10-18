#include <iostream>
#include <vector>

using namespace std;

int main(void) {
	int i, tmp;
	int N, M;
	vector<int> ans;
	cin >> N >> M;
	for (i = 0; i < N; i++) {
		ans.push_back(0);
	}
	for (i = 0; i < M; i++) {
		cin >> tmp;
		ans[tmp - 1]++;
		cin >> tmp;
		ans[tmp - 1]++;
	}
	for (i = 0; i < N; i++) {
		cout << ans[i] << endl;
	}
	return 0;
}


