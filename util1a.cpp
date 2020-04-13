#include <util1a.h>

void desenha_retangulo_preenchido(int lin, int col, char cc, char cp){//questao 5
    for (int i=0; i<lin; i++) {
        for (int j=0; j<col; j++) {
            if (j != 0 && j != col-1 && i != 0 && i != lin-1) {
                printf("%c", cp);
            } else {
                printf("%c", cc);
            }
        }
        printf("\n");
    }
}

