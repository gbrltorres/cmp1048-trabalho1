#include <list1c.h>

void exercise_3_1c(){
    string s;
    printf("Digite uma frase qualquer: ");
    cin.ignore();
    getline(cin,s);
    s.erase(remove(s.begin(), s.end(), ' '), s.end());
    if (is_palindromum(s)) {
        printf("A frase é palíndroma\n");
    } else {
        printf("A frase não é palíndroma\n");
    }
}

void exercise_5_1c(){
    string s;
    printf("Digite uma frase: ");
    cin.ignore();
    getline(cin, s);
    to_lower_case(s);
    cout << "Frase modificada: " << s << endl;
}

void exercise_6_1c(){
    string s;
    printf("Digite uma frase: ");
    cin.ignore();
    getline(cin, s);
    to_upper_case(s);
    cout << "Frase modificada: " << s << endl;
}

void exercise_7_1c(){
    string s;
    printf("Digite uma frase: ");
    cin.ignore();
    getline(cin, s);
    printf("Digite o tamanho da largura da caixa (em unidade): ");
    int t;
    scanf("%d", &t);
    printf("Digite um caractere para representar a borda da caixa: ");
    char c;
    scanf(" %c",&c);
    box_with_centralized_text(s, t, c);
}
