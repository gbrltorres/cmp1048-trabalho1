#include <util2d.h>

int** create_random_matrix(int l, int c){
    int** pmat = new int*[l];
    for (int i=0; i<l; i++) {
        pmat[i] = new int[c];
        for (int j=0; j<c; j++) {
            pmat[i][j] = rand()%10;
        }
    }
    return pmat;
}

int** create_matrix(int l, int c){
    int** pmat = new int*[l];
    for (int i=0; i<l; i++) {
        pmat[i] = new int[c];
        for (int j=0; j<c; j++) {
            pmat[i][j] = 0;
        }
    }
    return pmat;
}

void print_matrix(int** mat, int l, int c){
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}

int** sum_matrix(int** m1, int** m2, int l, int c){//questao 6
    int** mr = create_matrix(l, c);
    for (int i=0; i<l; i++) {
        for (int j=0; j<c; j++) {
            mr[i][j] = m1[i][j] + m2[i][j];
        }
    }
    return mr;
}
