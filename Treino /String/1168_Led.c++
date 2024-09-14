#include <bits/stdc++.h>
using namespace std;
int main(){
    int n;
    string numero;
    cin >> n;
    cin.ignore();
    map<char, int> led = {
        {'0', 6},{'1', 2},{'2', 5},{'3', 5},{'4',4},{'5',5},{'6', 6},{'7',3},{'8', 7},{'9', 6} 
    };
    while (n--){
        getline(cin,numero);
        int total = 0;
        for (char c : numero){
            total += led[c];
        }
        cout << total << " leds\n";
    }
    return 0;
}






