#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string frase;
    cin >> n;
    cin.ignore();
    while (n--){
        set<char> setizinho;
        getline(cin,frase);
        for (char c : frase){
            if (isalpha(c)){
                setizinho.insert(c);
            }
        }

        int tamanho = setizinho.size();

        if (tamanho >= 26){
            cout << "frase completa" << endl;
        }else if (tamanho >= 13)
        {
            cout << "frase quase completa" << endl;
        }else{
            cout << "frase mal elaborada" << endl;
        }
    }
    return 0;
}


