#include <bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;    
    vector <string> cri(n);
    vector <string> ord(n);

    for (int i = 0; i < n; i++){
        cin >> cri[i];
    }
    for (int i = 0; i < n; i++){
        cin >> ord[i];
    }

    int u = 0;
    for (int i = 0; i < n; i++){
        cout << ord[u];
        if (cri[i] == ord[u]){
            u++;
        } 
        if (i != n - 1){
            cout << " ";
        } 
    }
}