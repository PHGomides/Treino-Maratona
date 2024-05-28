#include <bits/stdc++.h>
using namespace std;
int main() {   
   int S;
   while (cin >> S){
        vector <int> Nog(S);
        vector <int> Quad(S);
        int cont = 0, u = 0;
        for (int i = 0; i < S; i++){
            cin >> Quad[i];
        }
        for (int i = 0; i < S; i++){
            cin >> Nog[i];
        }
        sort(Nog.begin(), Nog.end());
        sort(Quad.begin(), Quad.end());
        for (int i = 0; i < S; i++){
            if (Nog[i] > Quad[u]){
                cont++;
                u++;      
            } 
        } 
        cout << cont << endl;    
    }
}
    
