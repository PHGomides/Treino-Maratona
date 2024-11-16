#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    long long int x;
    cin >> n;
    while (n--){
        cin >> x;
        bool primo = true;
        for (int i = 2; i <= 5; x++){
            if((x % i) == 0){
                primo = false;
            }
        }
        for (int i = 7; i <= sqrt(x); x++){
            if((x % i) == 0){
                primo = false;
            }
        }
        if (primo){
            cout << "Prime\n";
        }else{
            cout << "Not Prime\n";
        }
    }
    return 0;
}
