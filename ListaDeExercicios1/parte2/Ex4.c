#include <stdio.h>
#include <locale.h>

struct Projeto {
    char nome[100];
    char area[20];
    float valorTotal;
    char dataInicio[20];
    int duracaoMeses;
};

void cadastrarProjeto(struct Projeto projetos[], int *numProjetos);
void consultarProjetos(struct Projeto projetos[], int numProjetos);

int main() {
    setlocale(LC_ALL, "");

    struct Projeto projetos[100];
    int numProjetos = 0;
    int opcao;

    do {
        printf("\n1) Cadastrar projeto\n");
        printf("2) Consultar projetos\n");
        printf("3) Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarProjeto(projetos, &numProjetos);
                break;
            case 2:
                consultarProjetos(projetos, numProjetos);
                break;
            case 3:
                printf("Encerrando o programa.\n");
                break;
            default:
                printf("Opção inválida. Escolha novamente.\n");
        }
    } while (opcao != 3);

    return 0;
}

void cadastrarProjeto(struct Projeto projetos[], int *numProjetos) {
    struct Projeto novoProjeto;

    printf("Nome do projeto: ");
    scanf(" %[^\n]s", novoProjeto.nome);
    printf("Área do projeto (marketing, operacional ou inovação): ");
    scanf(" %[^\n]s", novoProjeto.area);
    printf("Valor total: ");
    scanf("%f", &novoProjeto.valorTotal);
    printf("Data de início prevista: ");
    scanf(" %[^\n]s", novoProjeto.dataInicio);
    printf("Duração em número de meses: ");
    scanf("%d", &novoProjeto.duracaoMeses);

    projetos[*numProjetos] = novoProjeto;
    (*numProjetos)++;

    printf("Projeto cadastrado com sucesso.\n");
}

void consultarProjetos(struct Projeto projetos[], int numProjetos) {
    if (numProjetos == 0) {
        printf("Não há projetos cadastrados.\n");
        return;
    }

    printf("\nProjetos cadastrados:\n");
    printf("------------------------------------------------------------------------------\n");
    printf("| %-30s | %-15s | %-10s | %-20s | %-18s |\n", "Nome", "Área", "Valor", "Data de Início", "Duração (meses)");
    printf("------------------------------------------------------------------------------\n");
    for (int i = 0; i < numProjetos; i++) {
        printf("| %-30s | %-15s | %-10.2f | %-20s | %-18d |\n", projetos[i].nome, projetos[i].area, projetos[i].valorTotal, projetos[i].dataInicio, projetos[i].duracaoMeses);
    }
    printf("------------------------------------------------------------------------------\n");
}
