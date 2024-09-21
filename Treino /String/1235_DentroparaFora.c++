#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string frase;
    cin >> n;
    cin.ignore();
    while (n--){
        getline(cin,frase);
        int tamanho = frase.size();
        int meio = tamanho / 2;
        string esquerda = frase.substr(0,meio);
        string direita = frase.substr(meio);

        reverse(esquerda.begin(), esquerda.end());
        reverse(direita.begin(), direita.end());

        cout << esquerda + direita << endl;
        
    }
    return 0;
}


