#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int i, x, max;
    int N;
    char c;
    string S;
    cin >> N >> S;
    x = 0;
    max = x;
    for(i = 0; i < N; i++) {
        c = S[i];
        if(c == 'I') {
            x++;
            if(max < x) {
                max = x;
            }
        } else {
            x--;
        }
    }
    cout << max << endl;
    return 0;
}


