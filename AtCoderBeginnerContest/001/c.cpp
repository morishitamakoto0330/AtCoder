#include <iostream>
#include <string>
#include <cmath>

using namespace std;

int main(void) {
    int Deg, Dis, W;
    double degree, _wind_speed, wind_speed;
    string Dir;
    // input --------------------------------
    cin >> Deg >> Dis;
    degree = Deg/10.0;
    _wind_speed = Dis/60.0;
    wind_speed = round(_wind_speed*10.0)/10.0;
    // set Dir ------------------------------
    if(degree >= 11.25 && degree < 33.75) Dir = "NNE";
    else if(degree >=  33.75 && degree <  56.25) Dir = "NE";
    else if(degree >=  56.25 && degree <  78.75) Dir = "ENE";
    else if(degree >=  78.75 && degree < 101.25) Dir = "E";
    else if(degree >= 101.25 && degree < 123.75) Dir = "ESE";
    else if(degree >= 123.75 && degree < 146.25) Dir = "SE";
    else if(degree >= 146.25 && degree < 168.75) Dir = "SSE";
    else if(degree >= 168.75 && degree < 191.25) Dir = "S";
    else if(degree >= 191.25 && degree < 213.75) Dir = "SSW";
    else if(degree >= 213.75 && degree < 236.25) Dir = "SW";
    else if(degree >= 236.25 && degree < 258.75) Dir = "WSW";
    else if(degree >= 258.75 && degree < 281.25) Dir = "W";
    else if(degree >= 281.25 && degree < 303.75) Dir = "WNW";
    else if(degree >= 303.75 && degree < 326.25) Dir = "NW";
    else if(degree >= 326.25 && degree < 348.75) Dir = "NNW";
    else Dir = "N";
    // set W --------------------------------
    if(wind_speed <= 0.2) W = 0;
    else if(wind_speed <= 1.5) W = 1;
    else if(wind_speed <= 3.3) W = 2;
    else if(wind_speed <= 5.4) W = 3;
    else if(wind_speed <= 7.9) W = 4;
    else if(wind_speed <= 10.7) W = 5;
    else if(wind_speed <= 13.8) W = 6;
    else if(wind_speed <= 17.1) W = 7;
    else if(wind_speed <= 20.7) W = 8;
    else if(wind_speed <= 24.4) W = 9;
    else if(wind_speed <= 28.4) W = 10;
    else if(wind_speed <= 32.6) W = 11;
    else W = 12;
    // check -------------------------------
    if(W == 0) Dir = "C";

    cout << Dir << " " << W << endl;
    return 0;
}

