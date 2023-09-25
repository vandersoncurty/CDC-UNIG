#include <stdio.h>
#include <string.h>
#include "lista_aluno.h"

void criar(ListaAlunos *L) {
    L->n= 0;
}

int incluir(ListaAlunos *L, int pos, Aluno aluno) {
    if ((L->n == MAX) || (pos > L->n + 1))
        return 0;

    int i;
    for (i = L->n; i >= pos; i--)
        L->dado[i] = L->dado[i-1];

    L->dado[pos-1] = aluno;
    (L->n)++;
    return 1;
}
int excluir(ListaAlunos *L, int pos) {
    if ((pos <= 0) || (pos > L->n))
        return 0;
    
    int i;
    for (i = pos; i <= L->n - 1; i++)
        L->dado[i-1] = L->dado[i];

(L->n)--;
return 1;
}

int imprimeAlunos(ListaAlunos *L) {
    printf("%-4s %-10s %-6s %-5s \n", "Pos", "Nome", "Nota", "Status");

    int total - L->n;
    int i;
    for (i = 0; i < total; i++)
        printf("%-4d %-10s %-6.1f %-4d \n", i+1, dado[i].nome, dado[i].nota, dado[i].status);
        printf("\n");
}

int imprimeAlunosAtivos(ListaAluni *L) {
    printf("%-4s %-10s %-6s %-5c \n", "Pos", "Nome", "Nota", "Status");

    int total - L->n;
    int i;
    for (i = 0; i < total; i++) {
        if (strcmp(dado[i].status, "ativo") 
        = 0) {
            printf("%-4d %-10s %-6.1f %-4c \n", i+1, dado[i].nome, dado[i].nota, dado[i].status);
            printf("\n");
        }
    }
}