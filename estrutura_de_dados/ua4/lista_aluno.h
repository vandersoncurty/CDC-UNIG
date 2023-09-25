#define MAX 40

typedef struct {
    char nome[20];
    float nota;
    char status;
} Aluno;

typedef struct {
    Aluno dado[MAX];
    int n;
} ListaAlunos;

void criar(ListaAlunos *);

void incluir(ListaAlunos *, int, Aluno);

void excluir(ListaAlunos *, int, Aluno);

void decrescente(ListaAlunos *);

void imprimeAlunos(ListaAlunos *);

void imprimeAlunosAtivos(ListaAlunos *);