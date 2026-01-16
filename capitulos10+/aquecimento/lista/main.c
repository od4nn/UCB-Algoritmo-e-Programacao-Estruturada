#include <stdio.h>
#include <stdlib.h>

/*Pergunte ao usuário: "Quantos números você quer guardar?".
Aloque um vetor desse tamanho exato usando malloc.
Faça um loop (for) para pedir ao usuário digitar os números um por um.
Dica: Pode usar scanf("%d", &vetor[i]) agora, a sintaxe de colchetes
facilita a vida.
Faça outro loop para mostrar todos os números na tela.
Dê o free no vetor (libera o bloco todo de uma vez).*/

int main() {
    int tamanho;
    printf("Quantos numeros voce quer guardar?");
    scanf("%d", &tamanho);
    int *lista = (int *) malloc (sizeof(int) * tamanho);

    if (lista == NULL) {
        printf("\nMemoria cheia!");
        return 1;
    }

    for (int i = 0; i < tamanho; i++) {
        printf("\nInforme o numero [%d] do vetor: ", i+1);
        scanf("%d", (lista+i));
    }
    printf("\nVETOR:\n");

    for(int i = 0; i < tamanho; i++) {
        printf("\n%d", lista[i]);
    }

    free(lista);

    return 0;
}