#include <iostream>
#include <cmath>

int main() { 
    int t;
    int n;
    int s;
    std::cin >> t;

    for (int i = 0; i < t; i++){
        int s = 0;
        std::cin >> n;
        for (int j = 0; j < n; j++){
            s += pow(2,j);
        }
        std::cout << s ;  
        std::cout << "\n" ;  
    }
    return 0;
}