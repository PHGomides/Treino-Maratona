#include <bits/stdc++.h>
using namespace std;
string A, B;
int buscar(int x){
    int h = 1;
    for (int p = x + 1; p < A.size(); p++){
        if(A[p] == B[0]){
            h++; 
        }else if (A[p] == B[1]){
            break;
        }  
    }
    return h;
} 
int main() {   
    int t;
    cin >> t;
    for (int i = 0; i < t; i++){
        cin >> A >> B;
        for (int w = 0; w < A.size(); w++){
            if (A[w] == B[0]){
                cout << buscar(w) << "\n";
                break;
            }else if (w == (A.size() - 1)){
                cout << "0\n";
            }
        }    
    }
}
