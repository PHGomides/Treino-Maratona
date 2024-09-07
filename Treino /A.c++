#include <bits/stdc++.h>
using namespace std;

int main(){
      int n[3];
      vector <int> t(4, 4);
      for (int i = 0; i < 3; i++){   
            cin >> n[i]; 
            t[n[i]] = n[i];    
      }
      for (int i = 0; i < 4; i++){
        if (t[i] == 4){
            cout << i << endl;
        }
      }
}