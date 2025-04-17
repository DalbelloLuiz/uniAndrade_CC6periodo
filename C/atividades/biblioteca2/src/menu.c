#include <stdio.h>
#include <stdlib.h>
#include "../lib/menu.h"

void limparTela() {
#ifdef _WIN32
    system("cls");
#else
    system("clear");
#endif
};

void pausarTela() {
    printf("Pressione ENTER para continuar...");
    getchar();
};

void menuPrincipal(struct Livro biblioteca[], int *totalLivros) {
    int opc;

    do {
        limparTela();
        printf("*****************************\n");
        printf("**Biblioteca Show de BOLA!**\n");
        printf("*****************************\n");
        printf("1 - Cadastrar Livro\n");
        printf("2 - Emprestar Livro\n");
        printf("3 - Devolver Livro\n");
        printf("4 - Relatorio\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opc);


        switch (opc) {
        case 1:
            limparTela();
            if (*totalLivros >= MAX_LIVROS) {
                printf("Limite de livros atingido!\n");
            } else {
                cadastrarLivro(&biblioteca[*totalLivros]);
                (*totalLivros)++;
            }
            pausarTela();
            break;
        case 2: {
            int aux;
            limparTela();
            exibirLivro(biblioteca, *totalLivros);
            printf("Qual livro voce deseja emprestar: ");
            scanf("%d", &aux);
            getchar();
            if (aux >= 0 && aux < *totalLivros) {
                emprestarLivro(&biblioteca[aux]);
            } else {
                printf("Livro invalido!\n");
            }
            pausarTela();
            break;
        }
        case 3: {
            int aux;
            limparTela();
            exibirLivro(biblioteca, *totalLivros);
            printf("Qual livro voce deseja devolver: ");
            scanf("%d", &aux);
            getchar();
            if (aux >= 0 && aux < *totalLivros) {
                devolverLivro(&biblioteca[aux]);
            } else {
                printf("Livro invalido!\n");
            }
            pausarTela();
            break;
        }
        case 4:
            limparTela();
            exibirLivro(biblioteca, *totalLivros);
            pausarTela();
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            pausarTela();
            limparTela();
            break;
        }
    } while (opc != 0);
};