#include <stdio.h>
#include <string.h>
#include "../lib/livro.h"

void cadastrarLivro(struct Livro *livro) {
    printf("Titulo: ");
    fflush(stdin);
    fgets(livro->titulo, MAX_STR, stdin);
    livro->titulo[strcspn(livro->titulo, "\n")] = '\0';

    printf("Autor: ");
    fflush(stdin);
    fgets(livro->autor, MAX_STR, stdin);
    livro->autor[strcspn(livro->autor, "\n")] = '\0';

    livro->total_emprestimos = 0;
    livro->status = DISPONIVEL;
    printf("Livro cadastrado com sucesso\n");
}

void exibirLivro(struct Livro livro[], int totalLivros) {
    for (int i = 0; i < totalLivros; i++) {
        printf("Livro %d - Titulo: %s | Autor: %s\n", i, livro[i].titulo, livro[i].autor);
        printf("Total de emprestimos: %d\n", livro[i].total_emprestimos);
        printf("Status: %s\n", livro[i].status == DISPONIVEL ? "Disponivel" : "Emprestado");
        printf("------------------------------\n");
    }
}

void emprestarLivro(struct Livro *livro) {
    if (livro->status == EMPRESTADO || livro->total_emprestimos == 3) {
        printf("Lamento, o livro nao pode ser emprestado no momento!\n");
    } else {
        livro->status = EMPRESTADO;
        livro->total_emprestimos++;
        printf("Livro emprestado com sucesso!\n");
    }
}

void devolverLivro(struct Livro *livro) {
    if (livro->status == DISPONIVEL) {
        printf("O livro nao se encontra emprestado!\n");
    } else {
        livro->status = DISPONIVEL;
        printf("Livro devolvido com sucesso!\n");
    }
}