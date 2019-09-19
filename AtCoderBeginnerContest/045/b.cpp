#include <iostream>
#include <string>
#include <vector>

#define A 0
#define B 1
#define C 2

using namespace std;

int main(void) {
	int turn;
	char c_tmp;
	string SA, SB, SC;
	vector<string> S;
	// get input ---------------------------
	cin >> SA >> SB >> SC;
	S.push_back(SA);
	S.push_back(SB);
	S.push_back(SC);
	// init turn ---------------------------
	turn = A;
	// game --------------------------------
	while (true) {
		// throw away card
		c_tmp = S[turn][0];
		S[turn].erase(S[turn].begin());
		// next turn
		if (c_tmp == 'a') {
			turn = A;
		}
		else if (c_tmp == 'b') {
			turn = B;
		}
		else {
			turn = C;
		}
		// check
		if (S[turn].empty()) {
			break;
		}
	}
	// disp answer -------------------------
	if (turn == A) {
		cout << 'A' << endl;
	}
	else if (turn == B) {
		cout << 'B' << endl;
	}
	else {
		cout << 'C' << endl;
	}
	return 0;
}

