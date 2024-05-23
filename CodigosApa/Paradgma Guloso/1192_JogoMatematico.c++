#include <bits/stdc++.h>
using namespace std;
int main() {   
    int n;
    string resposta;
    cin >> n;
    while (n--){
        cin >> resposta;
        if (resposta[0]  == resposta[2]){
            cout << (resposta[0] - 48) * (resposta[2] - 48) << "\n";
        }else if (islower(resposta[1])){
            cout << (resposta[0] - 48) + (resposta[2] - 48) << "\n";
        }else{
            cout << (resposta[2] - 48) - (resposta[0] - 48) << "\n";
        }
    }
}
    
