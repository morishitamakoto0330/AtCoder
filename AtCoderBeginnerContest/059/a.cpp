#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(void) {
	string s1, s2, s3;
	cin >> s1 >> s2 >> s3;
	transform(s1.begin(), s1.end(), s1.begin(), ::toupper);
	transform(s2.begin(), s2.end(), s2.begin(), ::toupper);
	transform(s3.begin(), s3.end(), s3.begin(), ::toupper);
	cout << s1[0];
	cout << s2[0];
	cout << s3[0];
	cout << endl;
	return 0;
}



