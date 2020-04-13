#include <list1a.h>

void exercise_5_1a(){
    int lin, col;
    char cc, cp;
    printf("Digite o número de linhas:\n");
    scanf("%d", &lin);
    printf("Digite o número de colunas:\n");
    scanf("%d", &col);
    printf("Digite o caractere do contorno:\n");
    scanf(" %c", &cc);
    printf("Digite o caractere do preenchimento:\n");
    scanf(" %c", &cp);
    desenha_retangulo_preenchido(lin, col, cc, cp);
}
