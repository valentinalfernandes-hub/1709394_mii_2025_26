#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX 100

/* Struct para guardar a informação do livro */
typedef struct {
    int id;
    char titulo[100];
    char autor[100];
} Livro;

/* Array para guardar os livros em memória */
Livro livros[MAX];
int total = 0;
int ultimoID = 0;

/* Carregar dados do ficheiro para o array */
void carregarFicheiro() {
    FILE *f = fopen("livros.txt", "r");
    if (f == NULL) {
        // Se ficheiro não existir, começa vazio
        return;
    }

    Livro temp;
    while (fscanf(f, "%d;%[^;];%[^\n]\n", &temp.id, temp.titulo, temp.autor) == 3) {
        livros[total] = temp;
        if (temp.id > ultimoID) ultimoID = temp.id;
        total++;
    }

    fclose(f);
}

/* Guardar os livros do array no ficheiro */
void guardarFicheiro() {
    FILE *f = fopen("livros.txt", "w");
    if (f == NULL) {
        printf("Erro ao abrir o ficheiro para gravar.\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        fprintf(f, "%d;%s;%s\n", livros[i].id, livros[i].titulo, livros[i].autor);
    }

    fclose(f);
}

/* Adicionar um livro novo */
void adicionarLivro() {
    if (total >= MAX) {
        printf("Limite de livros atingido.\n");
        return;
    }

    Livro novo;
    novo.id = ++ultimoID;

    printf("Título: ");
    fgets(novo.titulo, sizeof(novo.titulo), stdin);
    novo.titulo[strcspn(novo.titulo, "\n")] = '\0';

    printf("Autor: ");
    fgets(novo.autor, sizeof(novo.autor), stdin);
    novo.autor[strcspn(novo.autor, "\n")] = '\0';

    livros[total] = novo;
    total++;

    guardarFicheiro();

    printf("Livro adicionado (ID %d).\n", novo.id);
}

/* Pesquisar livro pelo título */
void pesquisarLivro() {
    char termo[100];

    printf("Pesquisar título: ");
    fgets(termo, sizeof(termo), stdin);
    termo[strcspn(termo, "\n")] = '\0';

    int encontrou = 0;
    for (int i = 0; i < total; i++) {
        if (strstr(livros[i].titulo, termo) != NULL) {
            printf("ID %d | %s - %s\n", livros[i].id, livros[i].titulo, livros[i].autor);
            encontrou = 1;
        }
    }

    if (!encontrou) {
        printf("Nenhum livro encontrado.\n");
    }
}

/* Remover livro pelo ID */
void removerLivro() {
    int id;
    char buffer[20];

    printf("ID a remover: ");
    fgets(buffer, sizeof(buffer), stdin);
    id = atoi(buffer);

    int pos = -1;
    for (int i = 0; i < total; i++) {
        if (livros[i].id == id) {
            pos = i;
            break;
        }
    }

    if (pos == -1) {
        printf("Livro não encontrado.\n");
        return;
    }

    for (int i = pos; i < total - 1; i++) {
        livros[i] = livros[i + 1];
    }

    total--;

    guardarFicheiro();

    printf("Livro removido com sucesso.\n");
}

/* Listar todos os livros */
void listarLivros() {
    if (total == 0) {
        printf("Nenhum livro registado.\n");
        return;
    }

    for (int i = 0; i < total; i++) {
        printf("ID %d | %s - %s\n", livros[i].id, livros[i].titulo, livros[i].autor);
    }
}

/* Menu principal */
int main() {
    carregarFicheiro();  // Carrega logo ao iniciar

    int opcao;
    char buffer[20];

    do {
        printf("\n--- Gestão de Biblioteca ---\n");
        printf("1 - Adicionar livro\n");
        printf("2 - Listar livros\n");
        printf("3 - Pesquisar livro\n");
        printf("4 - Remover livro\n");
        printf("0 - Sair\n");
        printf("Opção: ");

        fgets(buffer, sizeof(buffer), stdin);
        opcao = atoi(buffer);

        switch (opcao) {
            case 1: adicionarLivro(); break;
            case 2: listarLivros(); break;
            case 3: pesquisarLivro(); break;
            case 4: removerLivro(); break;
            case 0: printf("A sair...\n"); break;
            default: printf("Opção inválida.\n");
        }

    } while (opcao != 0);

    return 0;
}