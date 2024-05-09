#include <bits/stdc++.h>
using namespace std;
int main() { 
    int t, b, a[2], d[2], l[2], vg[2];
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> b;
        for (int u = 0; u < 2; u++){
            cin >> a[u] >> d[u] >> l[u];
            if (l[u] % 2 == 0){
                vg[u] = (a[u] + d[u])/2 + b;
            }else{
                vg[u] = (a[u] + d[u])/2;
            }     
        }
        if (vg[0] < vg[1]){
            cout << "Guarte\n";
        }else if (vg[0] > vg[1]){
            cout << "Dabriel\n";
        }else{
            cout << "Empate\n";
        }
    } 
}