#include <bits/stdc++.h>
using namespace std;
int main(){
int t, pa, pb;
float g1,g2;
cin >> t;
    for (int i = 0; i < t; i++){
        cin >> pa >> pb >> g1 >> g2 ;
        int soma = 0;
        while ((pa <= pb) && (soma <= 100)){
            soma++;
            pa = pa + pa*(g1/100);
            pb = pb + pb*(g2/100); 
        }
        cout << (soma > 100 ? "Mais de 1 seculo." : to_string(soma) + " anos.") << "\n";
    }
    return 0;    
}