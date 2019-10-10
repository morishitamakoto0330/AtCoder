#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

int main(void) {
    int i, j, checkpoint;
    int N, M;
    long long tmp, min;
    vector<int> ans;
    vector<long long> a, b, c, d;
    // get input ---------------------------------------
    cin >> N >> M;
    for(i = 0; i < N; i++) {
        cin >> tmp;
        a.push_back(tmp);
        cin >> tmp;
        b.push_back(tmp);
    }
    for(i = 0; i < M; i++) {
        cin >> tmp;
        c.push_back(tmp);
        cin >> tmp;
        d.push_back(tmp);
    }
    // search ------------------------------------------
    for(i = 0; i < N; i++) {
        checkpoint = 0;
        min = abs(a[i]-c[0])+abs(b[i]-d[0]);
        for(j = 0; j < M; j++) {
            tmp = abs(a[i]-c[j])+abs(b[i]-d[j]);
            if(tmp < min) {
                checkpoint = j;
                min = tmp;
            }
        }
        ans.push_back(checkpoint + 1);
    }
    // disp answer ------------------------------------
    for(i = 0; i < ans.size(); i++) {
        cout << ans[i] << endl;
    }
    return 0;
}




