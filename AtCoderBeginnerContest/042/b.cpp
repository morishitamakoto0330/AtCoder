#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main(void) {
    int N, L, i;
    string str_tmp, ans;
    vector<string> S;
    // get input --------------------------------
    cin >> N >> L;
    for(i = 0; i < N; i++) {
        cin >> str_tmp;
        S.push_back(str_tmp);
    }
    // sort -------------------------------------
    sort(S.begin(), S.end());
    // join -------------------------------------
    ans = "";
    for(i = 0 ; i < N; i++) {
        ans += S[i];
    }
    // disp answer ------------------------------
    cout << ans << endl;
    return 0;
}

