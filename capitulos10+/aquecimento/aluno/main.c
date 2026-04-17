#include <stdio.h>
#include <stdlib.h>

/*Faça um programa que pergunte a idade do usuário.
Crie um ponteiro int *idade.
Faça o malloc para ele.
Use scanf para ler a idade direto nesse endereço (dica: em scanf, o ponteiro já
é o endereço, não precisa de &).
Imprima: "Sua idade alocada é: X".
Dê free. */

int main() {
    int *idade = (int *) malloc(sizeof(int));

    if (idade==NULL) {
        printf("\nMemoria cheia!");
        return 1;
    }

    printf("\nInforme a idade: ");
    scanf("%d", idade);
    printf("\nSua idade alocada eh: %d", *idade);

    free (idade);
    return 0;
}