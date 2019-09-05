#include <iostream>

using namespace std;

int main(void) {
    int m, VV;
    cin >> m;

    if(m < 100) VV = 0;
    else if(m >= 100 && m <= 5000) VV = m/100;
    else if(m >= 6000 && m <= 30000) VV = m/1000 + 50;
    else if(m >= 35000 && m <= 70000) VV = (m/1000 - 30)/5 + 80;
    else if(m >= 70000) VV = 89;
    else VV = 0;
    
    if(VV/10 == 0) cout << 0;
    cout << VV << endl;
    return 0;
}

