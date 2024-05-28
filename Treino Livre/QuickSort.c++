#include <bits/stdc++.h>
using namespace std;

int particionar(int arr[], int inicio, int fim){
    int soma = 0, contagem = 0;
    for (int i = inicio; i < fim; i++){
        soma = soma + arr[i];
        contagem++;
    }
    int pivo = soma/contagem;

    int contagem = 0;
    int menor = pivo;
    for (int i = inicio; i < fim; i++){
        if (arr[i] == pivo){
            contagem = i;
            break;
        }else if (arr[i] < menor){
            if (/* condition */)
            {
                /* code */
            }
            
        }
        
    }

    int indicePivo = inicio + contagem;
    swap(arr[indicePivo], arr[inicio]);

    // Ordenando as partes esquerda e direita do elemento pivô
    int i = inicio, j = fim;

    while (i < indicePivo && j > indicePivo) {
        while (arr[i] <= pivo) {
            i++;
        }

        while (arr[j] > pivo) {
            j--;
        }

        if (i < indicePivo && j > indicePivo) {
            swap(arr[i++], arr[j--]);
        }
    }
    return indicePivo;
}

void quickSort(int arr[], int inicio, int fim){
    // caso base
    if (inicio >= fim)
        return;

    // particionando o array
    int p = particionar(arr, inicio, fim);

    // Ordenando a parte esquerda
    quickSort(arr, inicio, p - 1);

    // Ordenando a parte direita
    quickSort(arr, p + 1, fim);
}

int main(){
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = 6;

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}