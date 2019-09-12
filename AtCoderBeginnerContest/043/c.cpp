#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void) {
	int N, i, tmp, sum, cost, average;
	double _average;
	vector<int> a;
	// get input -----------------------------
	cin >> N;
	sum = 0;
	for (i = 0; i < N; i++) {
		cin >> tmp;
		sum += tmp;
		a.push_back(tmp);
	}
	// get average ----------------------------
	_average = (double)sum / N;
	average = (int)round(_average);
	// calc cost -----------------------------
	cost = 0;
	for (i = 0; i < N; i++) {
		cost += (a[i] - average) * (a[i] - average);
	}
	// disp answer --------------------------
	cout << cost << endl;
	return 0;
}

