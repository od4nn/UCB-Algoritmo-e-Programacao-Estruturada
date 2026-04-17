#include <stdio.h>
#include <stdlib.h>

/*O Desafio: Crie uma função que receba um vetor de inteiros e o seu tamanho.
  A função deve percorrer o vetor usando apenas aritmética de ponteiros (nada de
  usar colchetes vetor[i]) e encontrar o maior elemento.
  A Regra: Use *(ptr + i) para acessar os elementos.*/

int percorre (int *vetor, int tam) {
    int maior = *vetor;

    for (int i = 0; i < tam; i++){
        if(maior < *(vetor + i)){
            maior = *(vetor + i);
        }
    }

    return maior;
}

int main() {
    int *vetor;
    int tamanho, maior;

    printf("Informe o tamanho do vetor: ");
    scanf("%d", &tamanho);

    vetor = (int *) malloc (tamanho *sizeof(int));

    if(vetor == NULL) {
        printf("Erro ao alocar ao vetor!");
        return 1;
    }

    for(int i = 0; i < tamanho; i++){
        printf("Informe o vetor[%d]: ", i+1);
        scanf("%d", (vetor+i));
    }

    maior = percorre(vetor, tamanho);

    printf(" O maior numero do vetor eh: %d", maior);
    free (vetor);

    return 0;
}