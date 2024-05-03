#include <iostream>

int main() { 
    int x1, x2, y1, y2;

    while (1){
       std::cin >> x1 >> y1 >> x2 >> y2;

        if ((x1 == 0) && (y1 == 0) && (x1 == 0) && (y1 == 0))
           break;
        
        if ((x1 == x2) && (y1 == y2))
            std::cout << 0 << std::endl;
        else

            if (((x1 == x2) || (y1 == y2)) || (abs(x1 - x2) == abs(y1 - y2)))
                std::cout << 1 << std::endl;
            else 
                std::cout << 2 << std::endl;  
    }
    return 0;
}