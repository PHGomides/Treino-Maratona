#include <bits/stdc++.h>
using namespace std;
int main(){
string entrada;
    while (getline(cin,entrada)){
        for (int i = 0, u =0; i < entrada.length(); i++, u++){
            if (entrada[i] != ' '){
                cout << (u % 2 == 0 ?  entrada[i] = toupper(entrada[i]) : entrada[i] = tolower(entrada[i]));
            }else{
                cout << " ";
                u--;
            }
        }
    }  
} 