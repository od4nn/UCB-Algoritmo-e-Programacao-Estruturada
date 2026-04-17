#include <stdio.h>

/* Crie uma variável int x = 10.
   Crie um ponteiro int *p que aponte para x.
   Crie um ponteiro para ponteiro int **pp que aponte para p.
   Crie uma função que receba pp e altere o valor de x para 50
   sem mencionar a variável x ou o ponteiro p dentro da função.*/

void altera (int **pp) {
    **pp = 50;
}

int main() {
    int x = 10;
    int *p = &x;
    int **pp = &p;

    printf("\nx antes = %d", x);

    altera(pp);

    printf("\nx depois = %d", x);
    return 0;
}