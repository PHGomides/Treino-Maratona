#include <bits/stdc++.h>
using namespace std;

int main(){
    int n, m;

    while (cin >> n >> m , n!=0 && m != 0){
        int resultados[100][100];

        for (int i = 0; i < n; i++){
            for (int j = 0; j < m; j++){
                cin >> resultados[i][j];
            }
        }

        int carac = 0;
        bool carac1 = true, carac2 = true, carac3 = true, carac4 = true;

         for (int i = 0; i < n; i++){
            bool resolvetodos = true;
            for (int j = 0; j < m; j++){
                if (resultados[i][j] == 0){
                    resolvetodos = false;
                    break;
                }
            }
            if (resolvetodos){
                carac1 = false;
                break;
            }
        }


        for (int i = 0; i < m; i++){
            bool resolvetodos = false;
            for (int j = 0; j < n; j++){
                if (resultados[j][i] == 1){
                    resolvetodos = true;
                    break;
                }
            }
            if (!resolvetodos){
                carac2 = false;
                break;
            }
        }

        for (int i = 0; i < m; i++){
            bool resolvetodos = true;
            for (int j = 0; j < n; j++){
                if (resultados[j][i] == 0){
                    resolvetodos = false;
                    break;
                }
            }
            if (resolvetodos){
                carac3 = false;
                break;
            }
        }

         for (int i = 0; i < n; i++){
            bool resolvetodos = false;
            for (int j = 0; j < m; j++){
                if (resultados[i][j] == 1){
                    resolvetodos = true;
                    break;
                }
            }
            if (!resolvetodos){
                carac4 = false;
                break;
            }
        }


        if (carac1){
            carac++;
        }

        if (carac2){
            carac++;
        }

        if (carac3){
            carac++;
        }

        if (carac4){
            carac++;
        }

        cout << carac << endl;
    }
    
    return 0;
}






