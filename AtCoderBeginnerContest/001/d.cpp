#include <iostream>
#include <cmath>
#include <vector>
#include <string>
#include <algorithm>
#include <iomanip>
#include <sstream>

using namespace std;

bool compare(const pair<int, int> i, const pair<int, int> j) {
    return i.first < j.first;
}

int ctoi(const char c) {
    if('0' <= c && c <= '9') return c - '0';
    return -1;
}

int main(void) {
    int N, i, S_tmp, E_tmp, ans_tmp;
    string str_tmp;
    pair<int, int> pair_tmp;
    vector<pair<int, int>> SE, ans;
    // get and round input --------------------------------------
    cin >> N;
    for(i = 0; i < N; i++) {
        cin >> str_tmp;

        S_tmp = 0;
        S_tmp += ctoi(str_tmp[0])*1000;
        S_tmp += ctoi(str_tmp[1])*100;
        S_tmp += ctoi(str_tmp[2])*10;
        S_tmp += ctoi(str_tmp[3]) - ctoi(str_tmp[3])%5;
        E_tmp = 0;
        E_tmp += ctoi(str_tmp[5])*1000;
        E_tmp += ctoi(str_tmp[6])*100;
        E_tmp += ctoi(str_tmp[7])*10;
        E_tmp += ctoi(str_tmp[8]) + (5 - ctoi(str_tmp[8])%5)%5;
        if(E_tmp%100 == 60) {
            if(E_tmp/100 < 24) {
                E_tmp += 100;
            }
            E_tmp -= 60;
        }

        pair_tmp = make_pair(S_tmp, E_tmp);
        SE.push_back(pair_tmp);
    }
    // sort ------------------------------------------------------
    sort(SE.begin(), SE.end(), compare);
    // combine time ----------------------------------------------
    for(i = 0; i < N; i++) {
        S_tmp = SE[i].first;
        E_tmp = SE[i].second;
        while(i < N && E_tmp >= SE[i+1].first) {
            if(E_tmp < SE[i+1].second) E_tmp = SE[i+1].second;
            i++;
        }
        pair_tmp = make_pair(S_tmp, E_tmp);
        ans.push_back(pair_tmp);
    }
    // disp answer -----------------------------------------------
    ostringstream ss;
    for(i = 0; i < ans.size(); i++) {
        ss << setfill('0') << right << setw(4) <<  ans[i].first;
        ss << "-";
        ss << setfill('0') << right << setw(4) << ans[i].second;
        ss << "\n";
    }
    string s(ss.str());
    cout << s;

    return 0;
}
