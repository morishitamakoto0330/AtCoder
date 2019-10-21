#include <iostream>
#include <string>

#define N 1000

using namespace std;

int main(void) {
    int i;
    int hash[N];
    char c;
    string S, ans;
    cin >> S;
    for(i = 0; i < N; i++) {
        hash[i] = 0;
    }
    for(i = 0; i < S.size(); i++) {
        c = S[i];
        hash[(unsigned char)c]++;
    }
    ans = "yes";
    for(i = 0; i < N; i++) {
        if(hash[i] > 1) {
            ans = "no";
            break;
        }
    }
    cout << ans << endl;
    return 0;
}


