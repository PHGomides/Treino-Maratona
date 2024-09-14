#include <bits/stdc++.h> 
using namespace std;

int main() {
    int d;                 
    string n;             
    while ((cin >> d >> n) && d != 0) {  
        string r = "";
        char digito = d + '0';  // Converte o dígito `d` para o caractere

        // Loop que percorrecada caractere `c` da string `n`
        for (char c : n) {
            if (c != digito) {
                r.push_back(c);  // Adiciona o caractere `c` ao final da string `r`
            }
        }
        
        // Remove zeros à esquerda da string `r`
        while (r.size() > 1 && r[0] == '0') {  
            r.erase(0, 1); 
        }

        if (r.empty()) {
            r = "0";  // Define `r` como "0" para evitar uma string vazia
        }

        cout << r << endl; 

   
    }
    return 0;  
}
