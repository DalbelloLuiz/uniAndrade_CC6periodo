#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/livro.h"

void mostrarMenu(struct Livro biblioteca[], int *totalLivros) {
    int opc;
    int aux;

    do
    {
        system("clear");
        printf("*****************************\n");
        printf("**Bibliotecsa Show de BOLA!**\n");
        printf("*****************************\n");
        printf("1 - Cadastrar Livro\n");
        printf("2 - Emprestar Livro\n");
        printf("3 - Devolver Livro\n");
        printf("4 - Relatório\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao:");
        fflush(stdout);
        scanf("%d", &opc);
        switch (opc)
        {
        case 1:
            system("clear");
            if (*totalLivros >= MAX_LIVROS)
            {
                printf("Limite de livros atingido!\n");
                system("read -p 'Pressione ENTER para continuar...' var");
                system("clear");
                break;
            }
            else
            {
                cadastrarLivro(&biblioteca[*totalLivros]);
                (*totalLivros)++;
                system("clear");
                break;
            }
        case 2:
            int aux = 0;
            system("clear");
            exibirLivro(biblioteca, *totalLivros);
            printf("Qual livro voce deseja emprestar: ");
            fflush(stdout);
            scanf("%d", &aux);
            if (aux > *totalLivros || aux < 0)
            {
                printf("Livro inválido!\n");
                system("read -p 'Pressione ENTER para continuar...' var");
                system("clear");
                break;
            }
            else
            {
                emprestarLivro(&biblioteca[aux]);
                system("read -p 'Pressione ENTER para continuar...' var");
                system("clear");
                break;
            }
        case 3:
            system("clear");
            exibirLivro(biblioteca, *totalLivros);
            printf("Qual livro voce deseja devolver: ");
            fflush(stdout);
            scanf("%d", &aux);
            devolverLivro(&biblioteca[aux]);
            system("read -p 'Pressione ENTER para continuar...' var");
            system("clear");
            break;
        case 4:
            system("clear");
            exibirLivro(biblioteca, *totalLivros);
            system("read -p 'Pressione ENTER para continuar...' var");
            system("clear");
            break;
        case 0:
            printf("Saindo...\n");
            break;
        default:
            printf("Opcao invalida!\n");
            system("read -p 'Pressione ENTER para continuar...' var");
            system("clear");
            break;
        }
    } while (opc != 0);
}