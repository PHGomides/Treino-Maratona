#include <bits/stdc++.h>
using namespace std;

int main(){
    int E, V;
    float T;
    int horas , min;
    cin >> E >> V;
    if (V != 0){
        T = static_cast <float> (E)/V;
        horas = static_cast <int> (T);
        min = (T-horas)*60;
        if (min >= 60){
            min -= 60;
            horas++;
        }
        horas = horas + 19;
        horas = horas%24;
    }else {
        horas = 19;
        min = 0;
    }
    cout << setfill('0') << setw(2) << horas << ":" << setfill('0') << setw(2) << min << endl;
}