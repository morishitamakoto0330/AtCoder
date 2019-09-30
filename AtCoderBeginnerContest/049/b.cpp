#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(void) {
    int i, index;
    int H, W, new_H;
    string s_tmp;
    vector<string> C, new_C;
    // get input ---------------------------------
    cin >> H >> W;
    new_H = H*2;
    for(i = 0; i < H; i++) {
        cin >> s_tmp;
        C.push_back(s_tmp);
    }
    // extend C ----------------------------------
    for(i = 1; i <= new_H; i++) {
        index = (i+1)/2;
        index--;
        new_C.push_back(C[index]);
    }
    // disp answer ------------------------------
    for(i = 0; i < new_H; i++) {
        cout << new_C[i] << endl;
    }
    return 0;
}



