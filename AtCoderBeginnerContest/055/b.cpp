#include <iostream>

#define MAX 1000000007

using namespace std;

int main(void) {
	long long i, ans;
	long N;
	cin >> N;
	ans = 1;
	for (i = 2; i <= N; i++) {
		ans = ans * i % MAX;
	}
	cout << ans << endl;
	return 0;
}



