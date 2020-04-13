#include <list2a.h>

void exercise_1_2a(){
    int a,b,c;
    printf("Digite três números: ");
    scanf("%d %d %d", &a, &b, &c);
    change_values_ascending_order(a, b, c);
    printf("Números em ordem crescente: %d %d %d\n", a,b,c);
}

void exercise_3_2a(){
    string s;
    printf("Digite uma palavra ou frase: ");
    cin.ignore();
    getline(cin, s);
    int n = quantity_of_chars(&s[0]);
    printf("Quantidade de caracteres: %d\n", n);
}

void exercise_4_2a(){
    string s1, s2;
    printf("Digite o primeiro texto:\n");
    cin.ignore();
    getline(cin, s1);
    printf("Digite o segundo texto:\n");
    getline(cin, s2);
    int q1 = quantity_of_chars(&s1[0]);
    int q2 = quantity_of_chars(&s2[0]);
    int n = compare_strings(&s1[0], &s2[0], q1, q2);
    switch (n) {
        case -1:
            printf("Os textos são lexicograficamente anterior\n");
            break;
        case 1:
            printf("Os textos são lexicograficamente posterior\n");
            break;
        case 0:
        printf("Os textos são são iguais\n");
        break;
        default:
            break;
    }
}
