#include <bits/stdc++.h>
using namespace std;

int main(){
   string frase;
   while (getline(cin,frase)){
        int media =0, ponto = 0, palavras = 0, total = 0;

        stringstream intervalo(frase);
        string palavra;

        while (intervalo >> palavra){
            bool palavraValida = true;
            int tamanho = palavra.size();

            if (palavra[tamanho - 1] == '.') {
                tamanho--; 
            }

            for (int i = 0; i < tamanho; i++) {
                if (!isalpha(palavra[i])) {
                    palavraValida = false;
                    break;
                }
            }

            if (palavraValida && tamanho > 0) {
                total += tamanho;
                palavras++;
            }
        }
        if (palavras > 0){
            media = total / palavras;
        }
        
        if(media <= 3){
            ponto = 250;
        }else if (media >= 6){
            ponto = 1000;
        }else{
            ponto = 500;
        }
        cout << ponto << endl;
   }
    return 0;
}