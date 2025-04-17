#ifndef LIVRO_H
#define LIVRO_H

#define MAX_STR 50
#define MAX_LIVROS 10

enum StatusLivro {
    DISPONIVEL,
    EMPRESTADO
};

struct Livro {
    char autor[MAX_STR];
    char titulo[MAX_STR];
    int total_emprestimos;
    enum StatusLivro status;
};

void cadastrarLivro(struct Livro *livro);
void exibirLivro(struct Livro livro[], int totalLivros);
void emprestarLivro(struct Livro *livro);
void devolverLivro(struct Livro *livro);

#endif