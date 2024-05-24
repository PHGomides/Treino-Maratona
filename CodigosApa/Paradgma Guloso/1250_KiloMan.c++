#include <bits/stdc++.h>
using namespace std;
int main() {   
    int n, t, i, T[50];
    string Tiro;
    cin >> n;
    while (n--){
        cin >> t;
        int cont = 0;
        for (i = 0; i < t; i++){
            cin >> T[i];
        }
        cin >> Tiro;
        for (i = 0; i < t; i++){
            if (Tiro[i] == 'J' && T[i] > 2){
                cont ++;
            }
            if (Tiro[i] == 'S' && T[i] <= 2){
                cont ++;
            }
        }
        cout << cont << "\n";   
    }
}