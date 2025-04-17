#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "../lib/livro.h"

void cadastrarLivro(struct Livro *livro)
{
    printf("Titulo: ");
    fflush(stdout);
    fflush(stdin);
    fgets(livro->titulo, MAX_STR, stdin);
    livro->titulo[strcspn(livro->titulo, "\n")] = '\0';

    printf("Autor: ");
    fflush(stdout);
    fflush(stdin);
    fgets(livro->autor, MAX_STR, stdin);
    livro->autor[strcspn(livro->autor, "\n")] = '\0';

    livro->total_emprestimos = 0;
    livro->status = DISPONIVEL;
    printf("Livro cadastrado com sucesso!\n");
    system("read -p 'Pressione ENTER para continuar...' var");
    
};

void exibirLivro(struct Livro livro[], int totalLivros)
{
    for (int i = 0; i < totalLivros; i++)
    {
        printf("Livro %d - ", i);
        printf("Titulo: %s | Autor: %s\n", livro[i].titulo, livro[i].autor);
        printf("Total de emprestimos: %d\n", livro[i].total_emprestimos);
        if (livro[i].status == DISPONIVEL)
        {
            printf("Status: Disponivel\n");
        }
        else
        {
            printf("Status: Emprestado\n");
        }
        printf("------------------------------\n");
    }
}

void emprestarLivro(struct Livro *livro)
{
    if (livro->status == EMPRESTADO || livro->total_emprestimos == 3)
    {
        printf("Lamento o livro nao pode ser emprestado no momento!\n");
    }
    else
    {
        livro->status = EMPRESTADO;
        livro->total_emprestimos++;
        printf("Livro emprestado com sucesso!\n");
    }
};

void devolverLivro(struct Livro *livro)
{
    if (livro->status == DISPONIVEL)
    {
        printf("O livro nao se encontra emprestado!\n");
    }
    else
    {
        livro->status = DISPONIVEL;
        printf("Livro devolvido com sucesso!\n");
    }
};