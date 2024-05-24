#include <bits/stdc++.h>
using namespace std;
int main() {   
    int n, largada[24], chegada[24], cont;
    map<int,int> posicao_inicial;
    while (cin >> n){
        vector<int> posicao(n); 
        cont = 0;
        for (int i = 0; i < n; i++){
            cin >> largada[i];
            posicao_inicial[largada[i]] = i; 
        }
        for (int i = 0; i < n; i++){
            cin >> chegada[i];
            posicao[i] = posicao_inicial[chegada[i]];
        }
        for (int i = 0; i < n; i++){
            for (int j = i + 1; j < n; j++){
                if (posicao[i] > posicao[j]){
                    cont++;
                }
            }  
        }
        cout << cont << endl;
    }
}