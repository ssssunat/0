/**


#include <stdio.h>
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    vector<long>    mass,
                    power;

    long m = 0,
         p = 0;
    while(scanf("%ld %ld", &m, &p) == 2) {
        mass.push_back(m);
        power.push_back(p);
    }

    sort(mass.begin(), mass.end());
    sort(power.begin(), power.end());

    long curMass = mass[0],
         curHeight = 1;
    // cout << "[" << mass[0] << ", " << power[0] << "]" << endl;

    for(size_t i = 1; i < mass.size(); i++) {

        if(power[i] >= curMass) {
            curMass += mass[i];
            curHeight++;
            // cout << "[" << mass[i] << ", " << power[i] << "]" << endl;
        }
    }

    cout << curHeight;

    return 0;
}
