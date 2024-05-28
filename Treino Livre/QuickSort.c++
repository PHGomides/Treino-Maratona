#include <bits/stdc++.h>
using namespace std;

int particionar(int arr[], int inicio, int fim){
    int soma = 0, tamanho = fim - inicio + 1;
    for (int i = inicio; i <= fim; i++){
        soma += arr[i];
    }
    int pivo = soma / tamanho;

    int indicePivo = inicio;
    int menorDiferenca = abs(arr[inicio] - pivo);
    for (int i = inicio + 1; i <= fim; i++){
        int diferenca = abs(arr[i] - pivo);
        if (diferenca < menorDiferenca){
            menorDiferenca = diferenca;
            indicePivo = i;
        }
    }

    swap(arr[indicePivo], arr[inicio]);
    pivo = arr[inicio];

    // Particionando o array
    int i = inicio + 1, j = fim;
    while (i <= j) {
        while (i <= j && arr[i] <= pivo) i++;
        while (i <= j && arr[j] > pivo) j--;
        if (i < j) swap(arr[i], arr[j]);
    }
    swap(arr[inicio], arr[j]);

    return j;
}

void quickSort(int arr[], int inicio, int fim){
    if (inicio < fim){
        int p = particionar(arr, inicio, fim);
        quickSort(arr, inicio, p - 1);
        quickSort(arr, p + 1, fim);
    }
}

int main(){
    int arr[] = { 9, 3, 4, 2, 1, 8 };
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}