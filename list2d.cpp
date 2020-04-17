#include <list2d.h>

void exercise_6_2d(){
    int l,c;
    printf("Digite a quantidade de linhas das matrizes (somente uma quantidade para as duas matrizes): ");
    scanf("%d", &l);
    printf("Digite a quantidade de colunas das matrizes (somente uma quantidade para as duas matrizes): ");
    scanf("%d", &c);
    int** m1 = create_random_matrix(l, c);
    printf("Matriz 1:\n");
    print_matrix(m1, l, c);
    printf("\n");
    int** m2 = create_random_matrix(l, c);
    printf("Matriz 2:\n");
    print_matrix(m2, l, c);
    printf("\n");
    int** mr = sum_matrix(m1, m2, l, c);
    printf("Matriz Soma:\n");
    print_matrix(mr, l, c);
    deallocate_matrix(m1, l);
    deallocate_matrix(m2, l);
    deallocate_matrix(mr, l);
}
