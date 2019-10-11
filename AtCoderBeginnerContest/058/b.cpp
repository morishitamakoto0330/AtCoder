#include <iostream>
#include <string>

using namespace std;

int main(void) {
    int i, diff;
    string O, E, ans;
    cin >> O >> E;
    diff = O.size() - E.size();
    ans = "";
    for(i = 0; i < E.size(); i++) {
        ans.push_back(O[i]);
        ans.push_back(E[i]);
    }
    if(diff == 1) {
        ans.push_back(O.back());
    }
    cout << ans << endl;
    return 0;
}



