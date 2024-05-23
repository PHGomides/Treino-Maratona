#include <bits/stdc++.h>
using namespace std;
int main() {   
    int n, resposta[5];
    char letra[] = {'A', 'B', 'C', 'D', 'E'};
    cin >> n;
    while (n--){
        int cont = 0, t;
        for (int x = 0; x < 5; x++){
            cin >> resposta[x];
        }
        for (int i = 0; i < 5; i++){
            if (resposta[i] <= 127){
                cont++;
                if (cont > 1){
                    break;
                }
                t = i;
            }
        }
        if (cont == 1){
            cout << letra[t] << "\n";
        }else{
            cout << "*\n";
        } 
        if (n == 0){
            cin >> n;
        }
    }
}
    

