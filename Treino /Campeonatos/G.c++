#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;
    int a[n + 1], b[n + 1];
    a[0] = 0;
    b[0] = 0;
    for (int i = 1; i < n + 1; i++) {
        cin >> a[i];
    }
    for (int i = 1; i < n + 1; i++) {
        cin >> b[i];
    }
    int cont = 0;
    for (int i = 1; i < n; i++) {
        k = k - (a[i] - a[i - 1]);
        if (k < 0) {
            cout << -1 << endl;
            return 0;
        }

        if (k < (a[i + 1] - a[i])) {
            k = b[i];
            cont++;
        }
    }
    cout << cont << endl;
    return 0;
}