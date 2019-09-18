#include <iostream>

#define ARRAY_NUM 100
#define OFFSET 50

using namespace std;

int main(void) {
    unsigned long long ans;
    int i, tmp;
    int N, A, A_NUM;
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
    A_NUM = diff[OFFSET];
    for(i = 1; i < OFFSET; i++) {
        if(diff[i] > 0 && diff[ARRAY_NUM - i] > 0) {
            ans += diff[i]*diff[ARRAY_NUM - i];
        }
    }
    return 0;
}
