#include <bits/stdc++.h>
using namespace std;

int main(){
    int h,m;
    while (cin >> h >> m){
       cout << setw(2) << setfill('0') <<  (h/30)%12 << ":" << setw(2) <<  setfill('0') << (m/6)%60 << endl;
    }    
}