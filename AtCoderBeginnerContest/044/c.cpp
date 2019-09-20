#include <iostream>
#include <cmath>

#define ARRAY_NUM 100
#define OFFSET 50

using namespace std;

int main(void) {
    unsigned long long ans, pair_num, A_num;
    int i, tmp;
    int N, A;
    int diff[ARRAY_NUM];
    // init diff array -----------------------
    for(i = 0; i < ARRAY_NUM; i++) {
        diff[i] = 0;
    }
    //get input ------------------------------
    cin >> N >> A;
    for(i = 0; i < N; i++) {
        cin >> tmp;
        tmp = tmp - A + OFFSET;
        diff[tmp]++;
    }
    // count answer --------------------------
    ans = 0;
    A_num = diff[OFFSET];
	pair_num = 0;
    for(i = 1; i < OFFSET; i++) {
        if(diff[i] > 0 && diff[ARRAY_NUM - i] > 0) {
            pair_num += diff[i]*diff[ARRAY_NUM - i];
        }
    }
	for (i = 0; i < OFFSET; i++) {
		if (diff[i] > 0) {
			cout << i << ":" <<  diff[i];
			cout << " " << ARRAY_NUM - i << ":" << diff[ARRAY_NUM - i];
			cout << endl;
		}
	}
	ans = pow(2, A_num);
	ans = ans * (pair_num - 1);
	// disp answer ----------------------------
	cout << ans << endl;
    return 0;
}
