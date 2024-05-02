#include <iostream>
using namespace std;
int main() { 
    int n;
    int h [20000];
    while (1){
        cin >> n;
        if (n == 0)
            break;
        int picos = 0;
        for(int j = 0; j < n; j++){
            cin >> h[j];
        }
        h[n] = h[0];
        h[n+1] = h[1];
        for(int i = 0; i <= n - 1; i++){
            if (((h[i] > h[i+1]) && (h[i+1] < h[i+2])) || ((h[i] < h[i+1]) && (h[i+1] > h[i+2]))){
                picos++;
            }
        }
        cout << picos << endl;      
    } 
    return 0;
}