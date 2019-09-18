#include <iostream>

using namespace std;

int main(void) {
    int N, K, X, Y, cost;
    cin >> N >> K >> X >> Y;
    if (N <= K) {
        cost = N*X;
    } else {
        cost = K*X + (N - K)*Y;
    }

    cout << cost << endl;
    return 0;
}
