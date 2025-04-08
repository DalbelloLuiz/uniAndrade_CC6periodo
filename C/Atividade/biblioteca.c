#include <stdio.h>
#include <string.h>

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

void cadastrarLivro(struct Livro *livro){
    printf("Titulo: ");
    fgets(livro->titulo, MAX_STR, stdin);
    livro->titulo[strcspn(livro->titulo, "\n")] = '\0';

    printf("Autor: ");
    fgets(livro->autor, MAX_STR, stdin);
    livro->autor[strcspn(livro->autor, "\n")] = '\0';

    livro->total_emprestimos = 0;
    livro->status = DISPONIVEL;
    printf("Livro castrado com sucesso\n");
};

void exibirLivro(struct Livro livro){
    printf("Titulo: %s\n", livro.titulo);
    printf("Autor: %s\n", livro.autor);
    printf("Total de emprestimos: %d\n", livro.total_emprestimos);

    if (livro.status == DISPONIVEL){
        printf("Status: Disponivel\n");
    } else {
        printf("Status: Emprestado\n");
    }
}


int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    
    cadastrarLivro(&biblioteca[totalLivros]);
    totalLivros++;
    cadastrarLivro(&biblioteca[totalLivros]);
    totalLivros++;
    exibirLivro(biblioteca[0]);
    exibirLivro(biblioteca[1]);
    printf("%d\n",totalLivros);
    return 0;
}