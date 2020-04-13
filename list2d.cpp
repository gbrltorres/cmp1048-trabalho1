#include <list2d.h>

void exercise_6_2d(){
    int l=3,c=3;
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
}
