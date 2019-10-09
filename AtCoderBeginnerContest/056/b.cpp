#include <iostream>

using namespace std;

int main(void) {
    int W, a, b, Wa, Wb;
    cin >> W >> a >> b;
    Wa = W + a;
    Wb = W + b;
    if(a <= b) {
        if(b <= Wa) {
            cout << 0 << endl;
        } else {
            cout << b - Wa << endl;
        }
    } else {
        if(a <= Wb) {
            cout << 0 << endl;
        } else {
            cout << a - Wb << endl;
        }
    }
    return 0;
}


