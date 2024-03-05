#include <stdio.h>
#include <locale.h>

void lerMatriz(int matriz[3][3]);
void mostrarMatriz(int matriz[3][3]);
void multiplicarMatrizes(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]);
void subtrairMatrizes(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]);
void somarMatrizes(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]);
void transpostaMatriz(int matrizC[3][3]);

int main() {
    setlocale(LC_ALL, "");
    int matrizA[3][3], matrizB[3][3], matrizC[3][3];
    int opcao;

    do {
        printf("\n1) C = A * B\n");
        printf("2) C = A - B\n");
        printf("3) C = A + B\n");
        printf("4) A Transposta da matriz C, sendo que C = A * B\n");
        printf("5) Sair do Programa\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Entre com os valores da matriz A:\n");
                lerMatriz(matrizA);
                printf("Entre com os valores da matriz B:\n");
                lerMatriz(matrizB);
                multiplicarMatrizes(matrizA, matrizB, matrizC);
                printf("Resultado da multiplicação:\n");
                mostrarMatriz(matrizC);
                break;
            case 2:
                printf("Entre com os valores da matriz A:\n");
                lerMatriz(matrizA);
                printf("Entre com os valores da matriz B:\n");
                lerMatriz(matrizB);
                subtrairMatrizes(matrizA, matrizB, matrizC);
                printf("Resultado da subtração:\n");
                mostrarMatriz(matrizC);
                break;
            case 3:
                printf("Entre com os valores da matriz A:\n");
                lerMatriz(matrizA);
                printf("Entre com os valores da matriz B:\n");
                lerMatriz(matrizB);
                somarMatrizes(matrizA, matrizB, matrizC);
                printf("Resultado da adição:\n");
                mostrarMatriz(matrizC);
                break;
            case 4:
                printf("Calculando a matriz C = A * B:\n");
                multiplicarMatrizes(matrizA, matrizB, matrizC);
                printf("A transposta da matriz C:\n");
                transpostaMatriz(matrizC);
                break;
            case 5:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Escolha novamente.\n");
        }
    } while (opcao != 5);

    return 0;
}

void lerMatriz(int matriz[3][3]) {
    setlocale(LC_ALL, "");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("Elemento [%d][%d]: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
}

void mostrarMatriz(int matriz[3][3]) {
    setlocale(LC_ALL, "");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matriz[i][j]);
        }
        printf("\n");
    }
}

void multiplicarMatrizes(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]) {
    setlocale(LC_ALL, "");
    int i, j, k;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizC[i][j] = 0;
            for (k = 0; k < 3; k++) {
                matrizC[i][j] += matrizA[i][k] * matrizB[k][j];
            }
        }
    }
}

void subtrairMatrizes(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]) {
    setlocale(LC_ALL, "");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizC[i][j] = matrizA[i][j] - matrizB[i][j];
        }
    }
}

void somarMatrizes(int matrizA[3][3], int matrizB[3][3], int matrizC[3][3]) {
    setlocale(LC_ALL, "");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            matrizC[i][j] = matrizA[i][j] + matrizB[i][j];
        }
    }
}

void transpostaMatriz(int matrizC[3][3]) {
    setlocale(LC_ALL, "");
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", matrizC[j][i]);
        }
        printf("\n");
    }
}
