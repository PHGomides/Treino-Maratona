#include <bits/stdc++.h>
using namespace std;
char matrix[4][90];
int n;
int convert(char p){
    return p - 48;
}
int main(){
    cin >> matrix[0] >> matrix[1] >> matrix[2] >> matrix[3];
    n = strlen(matrix[0]);
    int f = convert(matrix[0][0])*1000 + convert(matrix[1][0])*100 + convert(matrix[2][0])*10 + convert(matrix[3][0]);
    int l = convert(matrix[0][n - 1])*1000 + convert(matrix[1][n - 1])*100 + convert(matrix[2][n - 1])*10 + convert(matrix[3][n - 1]);
    for (int i = 1; i < n-1; i++){
        int m = convert(matrix[0][i])*1000 + convert(matrix[1][i])*100 + convert(matrix[2][i])*10 + convert(matrix[3][i]);
        cout << char((f*m + l) % 257);
    }
    cout << "\n";
}   