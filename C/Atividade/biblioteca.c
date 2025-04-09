#include <stdio.h>
#include <stdlib.h>
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
    fflush(stdin);fgets(livro->titulo, MAX_STR, stdin);
    livro->titulo[strcspn(livro->titulo, "\n")] = '\0';

    printf("Autor: ");
    fflush(stdin);fgets(livro->autor, MAX_STR, stdin);
    livro->autor[strcspn(livro->autor, "\n")] = '\0';

    livro->total_emprestimos = 0;
    livro->status = DISPONIVEL;
    printf("Livro castrado com sucesso\n");
};

void exibirLivro(struct Livro livro[], int totalLivros){
    for(int i = 0; i < totalLivros ; i++){
        printf("Livro %d - ", i);
        printf("Titulo: %s | Autor: %s\n", livro[i].titulo,livro[i].autor);
        printf("Total de emprestimos: %d\n", livro[i].total_emprestimos);
        if (livro[i].status == DISPONIVEL){
            printf("Status: Disponivel\n");
        } else {
            printf("Status: Emprestado\n");
        }
        printf("------------------------------\n");
    }
}

void emprestarLivro(struct Livro *livro){
    if(livro->status == EMPRESTADO || livro->total_emprestimos == 3){
        printf("Lamento o livro nao pode ser emprestado no momento!\n");
    } else {
        livro->status = EMPRESTADO;
        livro->total_emprestimos++;
        printf("Livro emprestado com sucesso!\n");
    }
};

void devolverLivro(struct Livro *livro){
    if(livro->status == DISPONIVEL){
        printf("O livro nao se encontra emprestado!\n");
    }else{
        livro->status = DISPONIVEL;
        printf("Livro devolvido com sucesso!\n");
    }
};

int main(){
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    int opc;

    do{
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
        scanf("%d", &opc);
        getchar();
        switch (opc) {
        case 1:
        system("clear");
        if (totalLivros >= MAX_LIVROS){
            printf("Limite de livros atingido!\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            system("clear");
            break;  
        } else {
        cadastrarLivro(&biblioteca[totalLivros]);
        totalLivros++;
        printf("Pressione ENTER para continuar...");
        getchar();
        system("clear");
            break;
        }    
        case 2:
        int aux = 0;
        system("clear");
        exibirLivro(biblioteca, totalLivros);
        printf("Qual livro voce deseja emprestar: ");
        scanf("%d", &aux);
        if (aux > totalLivros || aux < 0){
            printf("Livro inválido!\n");
            getchar();
            printf("Pressione ENTER para continuar...");
            getchar();
            system("clear");
            break;            
        } else{ emprestarLivro(&biblioteca[aux]);
        getchar();
        printf("Pressione ENTER para continuar...");
        getchar();
        system("clear");
            break;
        }    
        case 3:
        system("clear");
        exibirLivro(biblioteca, totalLivros);
        printf("Qual livro voce deseja emprestar: ");
        scanf("%d", &aux);
        devolverLivro(&biblioteca[aux]);
        getchar();
        printf("Pressione ENTER para continuar...");
        getchar();
        system("clear");
            break;
        case 4:
        system("clear");
        exibirLivro(biblioteca, totalLivros);
        printf("Pressione ENTER para continuar...");
        getchar();
        system("clear");
            break;
        case 0:
            printf("Saindo...\n");
            break;    
        default:
            printf("Opcao invalida!\n");
            printf("Pressione ENTER para continuar...");
            getchar();
            system("clear");
            break;

        }
    } while (opc != 0);
    return 0;
}