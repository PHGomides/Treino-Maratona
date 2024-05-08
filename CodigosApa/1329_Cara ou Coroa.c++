#include <bits/stdc++.h>
using namespace std;
int main(){
int entrada, n;
    while (cin >> n && n != 0){
        int m =0, j =0;
        for (int i = 0; i < n; i++){
            cin >> entrada;
            (entrada == 0 ? m++ : j++);
        }
        cout << "Mary won "<< m <<" times and John won "<< j <<" times\n";
    }  
} 