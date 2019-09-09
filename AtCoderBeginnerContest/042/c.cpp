#include <iostream>
#include <vector>

using namespace std;

int main(void) {
    int N, K, i, tmp, ans;
    vector<int> D;
    // get input --------------------------------
    cin >> N >> K;
    for(i = 0; i < K; i++) {
        cin >> tmp;
        D.push_back(tmp);
    }
    // search ----------------------------------
    ans = N;
    
    // disp answer ------------------------------
    cout << ans << endl;
    return 0;
}

