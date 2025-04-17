#include "../lib/menu.h"

int main() {
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;

    menuPrincipal(biblioteca, &totalLivros);

    return 0;
}