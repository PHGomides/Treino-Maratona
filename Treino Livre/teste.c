#include <stdio.h>
int main()
{
    int n1, n2 ,n3;
    printf("Digite um número: ");
    scanf("%i", &n1);
    printf("Digite outro número: ");
    scanf("%i", &n2);
    n3 = n1+n2;
    printf("O resultado da soma é: %.2i\n", n3);
    n3 = n1-n2;
    printf("O resultado da subtração é: %.1i\n", n3);
    n3 = n1*n2;
    printf("O resultado da multiplicação é: %.1i\n", n3);
    n3 = n1/n2;
    printf("O resultado da divisão é: %.1i\n", n3);
    return 0;

}