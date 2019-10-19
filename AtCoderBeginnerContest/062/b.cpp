#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
	int i;
	int H, W;
	string tmp;
	vector<string> a;
	cin >> H >> W;
	for (i = 0; i < H; i++) {
		cin >> tmp;
		a.push_back(tmp);
	}
	cout << '#';
	for (i = 0; i < W; i++) {
		cout << '#';
	}
	cout << '#' << endl;
	for (i = 0; i < H; i++) {
		cout << '#';
		cout << a[i];
		cout << '#' << endl;
	}
	cout << '#';
	for (i = 0; i < W; i++) {
		cout << '#';
	}
	cout << '#';
	return 0;
}




