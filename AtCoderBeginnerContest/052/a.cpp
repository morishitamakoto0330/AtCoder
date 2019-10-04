#include <iostream>

using namespace std;

int main(void) {
    int area1, area2;
    int A, B, C, D;
    cin >> A >> B >> C >> D;
    area1 = A*B;
    area2 = C*D;
    if(area1 > area2) {
        cout << area1 << endl;
    } else {
        cout << area2 << endl;
    }
    return 0;
}


