#include <bits/stdc++.h>
using namespace std;
int main() { 
    int t;
    int n;
    int s;
    cin >> t;

    for (int i = 0; i < t; i++){
        int s = 0;
        cin >> n;
        for (int j = 0; j < n; j++){
            s += pow(2,j);
        }
        cout << s ;  
        cout << "\n" ;  
    }
    return 0;
}