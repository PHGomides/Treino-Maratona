#include <bits/stdc++.h>
using namespace std;
int main(){
    string senha;
    while (getline(cin,senha)){
        bool flag = true, flagN = false, flagM = false, flagm = false;
        int tamanho = senha.size();
        
        if (tamanho > 32 || tamanho < 6){
            flag = false;
        }

        
        for (int i = 0; i < tamanho; i++){
            if (isdigit(senha[i])){
                flagN = true;
            }else if (isupper(senha[i])){
                flagM = true;
            }else if (islower(senha[i])){
                flagm = true;
            }else{
                flag = false;
            }  
        }

        if (!flagN || !flagM || !flagm){
            flag = false;
        }

        if (flag){
            cout << "Senha valida." << endl;
        }else{
            cout << "Senha invalida." << endl;
        }
    }
    
    return 0;
}


