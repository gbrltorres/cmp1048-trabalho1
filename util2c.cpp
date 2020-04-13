#include <util2c.h>

int* create_array(int n){
    int* arr = new int[n];
    for (int i=0; i<n; i++) {
        arr[i] = 0;
    }
    return arr;
}

void read_array(int* arr, int n){
    for (int i=0; i<n; i++) {
        printf("Digite o %d* valor: ", i+1);
        scanf("%d", &arr[i]);
    }
}

void print_array(int* arr, int n){
    printf("[");
    for (int i=0; i<n; i++) {
        if(i!=n-1)
            printf("%d,", arr[i]);
        else
            printf("%d", arr[i]);
    }
    printf("]");
    printf("\n");
}

void get_indexes(int* p, int &i, int &I){
    i = p[0];
    I = p[0];
    for (int j=1; p[j]; j++) {
        if (p[j]>I) {
            I = p[j];
        }
        if (p[j]<i) {
            i = p[j];
        }
    }
}
