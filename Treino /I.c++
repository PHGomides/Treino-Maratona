#include <bits/stdc++.h>
using namespace std;

bool ver(string col, int N, int M) {
    unordered_set<string> vis;
    for (int i = 0; i < N; ++i) {
        string block = col.substr(i * M, M);
        if (vis.find(block) != vis.end()) {
            return false;
        }
        vis.insert(block);
    }

    return true;
}

int main() {
    int N, M;
    cin >> N >> M;
    string col;
    cin >> col;
    if (ver(col, N, M)) {
        cout << "S" << endl;
    } else {
        cout << "N" << endl;
    }

    return 0;
}