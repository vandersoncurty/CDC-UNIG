#include <stdio.h>
#include <string.h>
#define MAX 500


typedef struct {
    int matricula;
    char nome[20];
    char celular[10];
    double peso;
    double altura;
} Aluno;

void inicializar(void);
void incluir(int, char *, char *, double, double);
void excluir(int);
void printAlunos(void);
void pesquisar(char *);

Aluno aluno[MAX];

void inicializar() {
    int matricula;
    for (matricula = 0; matricula < MAX; matricula++) {
        aluno[matricula].matricula = matricula;
        strcpy(aluno[matricula].nome, "");
        strcpy(aluno[matricula].celular, "");
        aluno[matricula].peso = 0.0;
        aluno[matricula].altura = 0.0;
    }
}

void incluir(int matricula, char *nome, char *celular, double peso, double altura) {
    if (matricula > MAX || strcmp(aluno[matricula].nome, "") != 0) {
        printf("Erro na inclusão: Aluno já cadastrado ou número de matrícula fora da faixa!");
    } else {
        strcpy(aluno[matricula].nome, nome);
        strcpy(aluno[matricula].celular, nome);
        aluno[matricula].peso = peso;
        aluno[matricula].altura = altura;
    }
}

void excluir(int matricula) {
    char nom[20];
    strcpy(nom, aluno[matricula].nome);

    aluno[matricula].matricula = matricula;
    strcpy(aluno[matricula].nome, "");
    strcpy(aluno[matricula].celular, "");
    aluno[matricula].peso = 0.0;
    aluno[matricula].altura = 0.0;

    printf("O aluno %s foi excluído com sucesso!", nom);
}

void printAlunos() {
    printf("\n%-4s %-20s %-10s %-4s %-4s \n", "Mat", "Nome", "Celular", "Peso", "Altura");
    printf("%-4s %-20s %-10s %-4s %-4s \n", "___", "____________________", "__________", "____", "____");

    for (int i = 0; i < MAX; i++) {
        if (strcmp(aluno[i].nome, "") != 0) {
            printf("%-4d %-20s %-10s %-4.2f %-4.2f \n", aluno[i].matricula, aluno[i].nome, aluno[i].celular, aluno[i].peso, aluno[i].altura);
        }
    }
    printf("\n");
}

void pesquisar(char *nome) {
    for (int i = 0; i < MAX; i++) {
        if (strcmp(aluno[i].nome, nome) == 0) {
            printf("\nMatricula: %d\nNome: %s\nCelular: %s\nPeso: %.2f\nAltura: %.2f\n", aluno[i].matricula, aluno[i].nome, aluno[i].celular, aluno[i].peso, aluno[i].altura);
            break;
        }
    }
}

int main() {
    inicializar();
    incluir(0, "Ramon Dino", "123456789", 101.0, 1.81);
    incluir(1, "Cbum", "123456789", 120.0, 1.85);
    incluir(2, "Paulo Muzy", "123456789", 110.00, 1.85);
    incluir(2, "Paulo Muzy", "123456789", 110.00, 1.85);
    printAlunos();
    excluir(1);
    printAlunos();
    pesquisar("Ramon Dino");

    return 0;
}
