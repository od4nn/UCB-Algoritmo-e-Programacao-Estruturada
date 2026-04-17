#include <stdio.h>

/* O Desafio: Crie uma função chamada potencia que recebe dois inteiros e um ponteiro
   para um inteiro chamado resultado. A Regra: A função não deve retornar nada (void).
   Ela deve calcular o primeiro número elevado ao segundo e salvar o valor diretamente no
   endereço de memória apontado por resultado. */

void potencia (int a, int b, int *resultado);

int main()
{
    int a, b, resultado_f;

    printf("Informe o primeiro numero: ");
    scanf("%d", &a);
    printf("Informe o segundo numero: ");
    scanf("%d", &b);
    potencia (a, b, &resultado_f);

    printf("Resultado: %d", resultado_f);
    return 0;
}

void potencia (int a, int b, int *resultado) {
    int poten = 1;

    for (int i = 0; i < b; i++) {
        poten *= a;
    }

    *resultado = poten;
}