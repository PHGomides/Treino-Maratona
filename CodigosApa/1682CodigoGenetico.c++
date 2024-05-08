#include <bits/stdc++.h>
using namespace std;
int main(){
int n;
char vetor[] = { 'N', 'O', 'P'};
    while (cin >> n && n != 0){
        char letras[n];
        for (int z = 0; z < n; z++){
            letras[n] = '\0';
        }
        for (int i = 0; i < n; i++){  
            int tamanho = strlen(letras)/2;
            char letra_aux[tamanho], letra_aux2[tamanho];
            for (int u = 0; u < 3; u++){
                letras[i] = vetor[u]; 
                for (int j = 0; j < tamanho; j++){
                    if (i%2 == 0){
                        letra_aux[j] = letras[j];
                        letra_aux2[j] = letras[tamanho + j];
                    }else{
                        letra_aux[j] = letras[j];
                        letra_aux2[j] = letras[tamanho + 1];
                    }
                }
                if (strcmp(letra_aux, letra_aux2) != 0){
                    break;
                }
            } 
            cout  << letras;
        }
        cout << "\n";
    } 
}




 