#include <bits/stdc++.h>
using namespace std;
int main() {   
    float x[2], y[2];
    for (int i = 0; i < 2; i++){
        cin >> x[i] >> y[i];
    }
    cout << fixed << setprecision(4) << sqrt(pow(x[1] - x[0], 2) + pow(y[1] - y[0], 2)) << "\n";
}