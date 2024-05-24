#include <bits/stdc++.h>
using namespace std;
int main(){   
   int n, numero = 0;
   vector <int> cont(2001, 0);
   cin >> n;
    for (int i = 0; i < n; i++){
        cin >> numero;
        cont[numero]++;
    }
    for (int i = 0; i <= 2000; i++){
        if (cont[i] > 0){
            cout << i << " aparece " << cont[i] << " vez(es)\n";
        }
    }
}