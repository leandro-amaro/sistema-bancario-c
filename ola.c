#include <stdio.h>

void MostrarVetor(int v[], int tamanho) {
    for(int i = 0; i < tamanho; i++) {
        printf("%d\n", v[i]);
    }
    printf("\n");
}
void BubbleSortCrescente(int v[], int tamanho) {
    for(int i = 0; i < tamanho - 1; i++) {
        for(int j = 0; j < tamanho - 1 - i; j++) {
            if(v[j] > v[j + 1]) {
                int temp = v[j];
                v[j] = v[j + 1];
                v[j + 1] = temp;
            }
        }
    }
}
 
int main() {
    int numeros[3];
    int i = 0;
    int numeros2[3];
    for(i = 0; i < 3; i++) {
        scanf("%d", &numeros[i]);
    }

    for(i = 0; i < 3; i++) {
        numeros2[i] = numeros[i];
    }
    
    BubbleSortCrescente(numeros, 3);

    MostrarVetor(numeros, 3);

    printf("\n");

    MostrarVetor(numeros2, 3);
    
 
    return 0;
}