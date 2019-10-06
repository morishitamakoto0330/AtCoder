#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int i, A_index, Z_index;
    char c;
    string s;
    // get input ----------------------------------------
    cin >> s;
    // search first A index and last Z index ------------
    A_index = -1;
    Z_index = -1;
    for(i = 0; i < s.size(); i++) {
        c = s[i];
        if(c == 'A' && A_index == -1) {
            A_index = i;
        } else if(c == 'Z') {
            Z_index = i;
        }
    }
    // disp answer ---------------------------------------
    cout << Z_index - A_index + 1 << endl;
    return 0;
}


