#include <stdio.h>
#include <stdlib.h>

/*Comece alocando memória para apenas 1 float (uma nota).
Crie uma variável para contar quantas notas já foram inseridas (começa com 0).
Entre num loop "infinito" (while(1) ou do while).

Dentro do loop:
Peça a nota e salve na posição atual.
Incremente o contador de notas.

Pergunte: "Deseja inserir mais? (1-Sim / 0-Não)".

Se for Sim:
Use realloc para aumentar o vetor para o tamanho (contador + 1) * sizeof(float).

Se for Não:
Quebre o loop (break).
No final, mostre todas as notas digitadas.

Free (Sempre ele).*/

int main() {
    int quant_nota = 0;

    float *nota = (float*) malloc(sizeof(float));

    do {
        int resp;

        printf("\nInforme a nota: ");
        scanf("%f", (nota + quant_nota));
        quant_nota++;
        printf("\nDeseja inserir mais notas?\nSim[1]\tNao[0].");
        scanf("%d", &resp);
        if (resp == 1) {
            nota = (float*) realloc(nota, (quant_nota + 1) * sizeof(float));

            if (nota == NULL) {
                printf("Erro de memória!");
                break;
            }
        }
        else {
            break;
        }
    }while (1);

    for (int i = 0; i < quant_nota; i++) {
        printf("\nNota[%d]: %.2f", i+1, *(nota+i));
    }

    free(nota);
    return 0;
}