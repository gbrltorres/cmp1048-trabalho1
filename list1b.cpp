#include <list1b.h>

void exercise_2_1b(){
    double r;
    printf("Digite o valor do raio: ");
    scanf("%lf", &r);
    double volume = calculate_volume_sphere(r);
    printf("volume: %.2lf\n", volume);
}

void exercise_6_1b(){
    int n;
    printf("Digite um número: ");
    scanf("%d", &n);
    factorial_of_large_number(n);
}

void exercise_8_1b(){
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    int f = fibonacci(n);
    printf("O %d* termo da sequência fibonnacci é: %d\n",n, f);
}

void exercise_9_1b(){
    int n;
    printf("Digite um número inteiro: ");
    scanf("%d", &n);
    if (is_regular(n)) {
        printf("O número %d é regular\n", n);
    }else{
        printf("O número %d não é regular\n", n);
    }
}

void exercise_10_1b(){
    int n, p;
    printf("Digite um inteiro n: ");
    scanf("%d", &n);
    printf("Digite um interio p: ");
    scanf("%d", &p);
    printf("C(n,p) = %.2lf\n", combinations(n, p));
}
