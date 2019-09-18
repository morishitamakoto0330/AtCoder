#include <iostream>
#include <string>

#define N 500

using namespace std;

int main(void) {
    int i;
    int hash[N];
    char c;
    string w, ans;
    // get input ----------------------------
    cin >> w;
    // init hash ----------------------------
    for(i = 0; i < N; i++) {
        hash[i] = 0;
    }
    // check --------------------------------
    for(i = 0; i < w.size(); i++) {
        c = w[i];
        hash[c]++;
    }
    ans = "Yes";
    for(i = 0; i < N; i++) {
        if(hash[i]%2 == 1) {
            ans = "No";
            break;
        }
    }
    // disp answer --------------------------
    cout << ans << endl;
    return 0;
}
