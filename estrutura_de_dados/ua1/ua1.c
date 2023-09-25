#include <stdio.h>

int main() {
    const int qtdMateriais = 3;
    const int qtdPrecos = 2;

    float materiaisPrecos[qtdMateriais][qtdPrecos];
    float materiaisMedias[qtdMateriais];
    float media = 0;

    for(int materiais = 0; materiais < qtdMateriais; materiais++) {
        for(int precos = 0; precos < qtdPrecos; precos++) {
            printf("insira o preco %i do material %i:\n", precos + 1, materiais + 1);
            scanf(" %f", &materiaisPrecos[materiais][precos]);
            media += materiaisPrecos[materiais][precos];
        }
        materiaisMedias[materiais] = media / qtdPrecos;
        media = 0;
    }
    for (int material = 0; material < qtdMateriais; material++) {
        printf("A media dos precos do material %i eh %.2f.\n", material + 1, materiaisMedias[material]);
    }
return 0;
}