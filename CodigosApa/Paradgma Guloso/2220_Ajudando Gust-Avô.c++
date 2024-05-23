#include <bits/stdc++.h>
using namespace std;
string A, B;
bool verificarB(int i){
    int tamA = A.size(), tamB = B.size(), a = 0, b = 0;
    while (a < tamA && b < tamB * i){
        if (A[a] == B[b/i]){
            b++;
        }
        a++;
    }
    return b == tamB * i;
}
int main() {   
    int t;
    cin >> t;
    while (t--){
        cin >> A >> B;
        int esq = 0, dir = A.size() / B.size(), resultado =0;
        while (esq <= dir){
            int meio = (esq + dir) / 2;
            if (verificarB(meio)){
                resultado = meio;
                esq = meio + 1;
            }
            else{
                dir = meio - 1;
            }
        }
        cout << resultado << "\n";
    }    
}

