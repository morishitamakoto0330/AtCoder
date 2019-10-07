#include <iostream>

using namespace std;

int main(void) {
    int A, B;
    // get input ----------------------
    cin >> A >> B;
    // sontaku ------------------------
    if(A == 1) A = 14;
    if(B == 1) B = 14;
    // disp answer --------------------
    if(A == B) {
        cout << "Draw" << endl;
    } else if(A > B) {
        cout << "Alice" << endl;
    } else {
        cout << "Bob" << endl;
    }
    return 0;
}



