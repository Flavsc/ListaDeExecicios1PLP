#include <stdio.h>
#include<locale.h>

int main() {
    setlocale(LC_ALL, "");
    int vetor[10];
    int i, j, temp;

    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &vetor[i]);
    }
    for (i = 0; i < 10 - 1; i++) {
        for (j = i + 1; j < 10; j++) {
            if (vetor[i] < vetor[j]) {
                temp = vetor[i];
                vetor[i] = vetor[j];
                vetor[j] = temp;
            }
        }
    }
    printf("\nOs valores em ordem decrescente:\n");
    for (i = 0; i < 10; i++) {
        printf("%d ", vetor[i]);
    }
    printf("\n");
    return 0;
}
