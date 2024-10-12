#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, verif = 1;
    while (cin >> n){
        if (n < 0){
             cout << "NO\n";
        }else{
        
            verif = 1;

            for (int p = 2; p*p <=n; p++){
                int cont = 0;
                while (n%p == 0){
                    n/= p;
                    cont++;

                }
                if (p%4 == 3 && cont%2 != 0){
                    verif = 0;
                    break;
                }
            }

            if (n>1 && n%4 == 3){
                verif = 0;
            }

            if(verif){
                cout << "YES\n";
            }else{
                cout << "NO\n";
        }
        }
             
    }
    
    return 0;
}