#include <bits/stdc++.h>
using namespace std;

int main(){
    string frase;
    int n;
    cin >> n;
    cin.ignore();
    while (n--){
        getline(cin,frase);
        for (int i = 0; i < frase.size(); i++){
            if((frase[i] > 64 && frase[i] <91) || (frase[i] > 96 && frase[i] <123)){
                frase[i] = frase[i] + 3;
            }

        }
        reverse(frase.begin(), frase.end());
        int met = frase.size()/2;
        for (int i = met; i < frase.size(); i++){
            frase[i] = frase[i] -1;
        }

        cout << frase << endl;
        }
    return 0;
}








