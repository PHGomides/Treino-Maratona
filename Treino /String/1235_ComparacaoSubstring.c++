#include <bits/stdc++.h>
using namespace std;

int main(){
    string frase1, frase2;
    while (getline(cin,frase1) && getline(cin,frase2)){
        int maior = 0, cont = 0;
        for (int i = 0; i < frase1.size(); i++){
            cont = 0;
            for (int j = 0; j < frase2.size(); j++){
                
                if ((i + cont) > frase1.size()){
                    break;
                } 
                
                if (frase1[i + cont] == frase2[j]){
                    cont++;
                }else if (cont >= 1){
                    maior = max(cont, maior);
                    cont = 0;
                }

            }
            maior = max(cont, maior);
        }

        cout << maior << endl;
    }
    return 0;
}






