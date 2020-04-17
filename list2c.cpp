#include <list2c.h>

void exercise_4_2c(){
    int n;
    printf("Digite o tamanho do vetor: ");
    scanf("%d", &n);
    int* p = create_array(n);
    read_array(p, n);
    print_array(p, n);
    int i;
    int I;
    get_indexes(p, i, I);
    printf("Menor número = %d\n", i);
    printf("Maior número = %d\n", I);
    delete[] p;
}
