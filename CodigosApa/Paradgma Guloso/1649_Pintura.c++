#include <bits/stdc++.h>
using namespace std;
int main(){   
    int n, m, r, c;
    char entrada;
    while (cin >> n >> m >> r >> c && (n!= 0 && m!= 0 && r!= 0 && c!= 0)){
        int cont = 0;
        vector<vector<int>> quadro(n, vector<int>(m,0));
        vector<vector<int>> pintura(n, vector<int>(m));
        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> entrada;
                pintura[i][j] = entrada - '0';   
            }
        } 

        for (int i = 0; i <= n - r; i++){
            for (int j = 0; j <= m - c; j++){
                if (quadro[i][j] != pintura[i][j]){
                    cont++;
                    for (int x = 0; x < r ; x++){
                        for (int y = 0; y < c ; y++){
                            quadro[i + x][j + y] = 1 - quadro[i + x][j+y]; 
                        }
                    } 
                }
            }
        }
    
        for (int i = 0; i < n; i++){
            if (cont == -1){
                break;
            }
            for (int j = 0; j < m; j++){
                if (quadro[i][j] != pintura[i][j]){
                    cont = -1;
                    break;
                }
            }
        }
        cout << cont << endl;
    }  
}