#include <bits/stdc++.h>
using namespace std;
int main() {   
   int N, B;
   cin >> N >> B;
   while (N != 0 || B != 0){
        vector <int> bolas(B,0);
        vector <int> anunciados(N+1,0);
        for (int i = 0; i < B; i++){
            cin >> bolas[i];
        }
        for (int i = 0; i < B; i++){
            for (int u = i; u < B; u++){
                anunciados[abs(bolas[i]-bolas[u])] = abs(bolas[i]-bolas[u]);  
            }
        }
        bool validar = true;
        for (int i = 1; i <= N; i++){
            if (anunciados[i] == 0){
                validar = false;
                break;
            } 
        }
        if (validar){
            cout << "Y\n";
        }else{
            cout << "N\n";
        }  
        cin >> N >> B;
   }
}
    
