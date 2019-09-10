#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void) {
    int N, K, i, j, tmp, ans, digits;
    bool hates;
    vector<int> D;
    // get input --------------------------------
    cin >> N >> K;
    for(i = 0; i < K; i++) {
        cin >> tmp;
        D.push_back(tmp);
    }
    // search ----------------------------------
    ans = N-1;
    do {
        hates = false;
        ans++;
        // get N digit -----------------------
        digits = 1;
        tmp = ans;
        while((tmp=tmp/10) != 0) digits++;
        // check ----------------------------
        for(i = 0; i < digits; i++) {
            tmp = ans%(int)(round(pow(10, (i + 1))));
            tmp /= (int)(round(pow(10, i)));
            for(j = 0; j < K; j++) {
                if(D[j] == tmp) {
                    hates = true;
                }
            }
        }
    } while(hates);
    // disp answer ------------------------------
    cout << ans << endl;
    return 0;
}

