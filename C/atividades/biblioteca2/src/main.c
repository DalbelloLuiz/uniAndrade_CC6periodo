#include <stdio.h>
#include <stdlib.h>
#include "../lib/livro.h"
#include "../lib/menu.h"

int main() {
    struct Livro biblioteca[MAX_LIVROS];
    int totalLivros = 0;
    
    mostrarMenu(biblioteca, &totalLivros);
    
    return 0;
}