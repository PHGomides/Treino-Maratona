#include <iostream>
#include<iomanip>
int main() { 
    float n, dinheiro[13] = {100.00,50.00,20.00,10.00,5.00,2.00,1.00,0.50,0.25,0.10,0.05,0.01};
    int quantidade = 0;
    std::cin >> n;
    n = n*100;
    for (int i = 0; i < 12; i++){
        quantidade = n / (dinheiro[i]*100);
        n = n - quantidade*(dinheiro[i]*100);
        if (i < 6){
            if (i == 0){
                std::cout << "NOTAS:\n";
            }
            std::cout << quantidade << " nota(s) de R$ " << std::fixed << std::setprecision(2) << dinheiro[i] << std::endl ;
        }else{
            if (i == 6){
                std::cout << "MOEDAS:\n";
            }
            std::cout << quantidade << " moeda(s) de R$ " << std::fixed << std::setprecision(2) << dinheiro[i] << std::endl;
        }
    }
    return 0;
}