#include <list2b.h>

void exercise_1_2b(){
    string s;
    printf("Digite um número em formato de string: ");
    cin >> s;
    int size = s.size();
    int res = str_to_int(&s[0], size);
    printf("Número convertido = %d\n", res);
}

void exercise_3_2b(){
    string s;
    printf("Digite uma frase: ");
    cin.ignore();
    getline(cin, s);
    printf("Frase original: %s\n", &s[0]);
    string ss = remove_whitespaces(&s[0]);
    printf("Frase corrigida (sem espaços no início e no final): %s\n", &ss[0]);
}

void exercise_4_2b(){
    string s;
    cout << "String: ";
    cin.ignore();
    getline(cin, s);
    char c;
    cout << "Caractere: ";
    cin >> c;
    string* lista = split(s, c);
    int size = count_words(lista);
    cout << "String original: " << s << endl;
    cout << "Palavras separadas: " << endl;
    for (int i=0; i<size ; i++) {
        cout << lista[i] << endl;
    }
    delete[] lista;
}

void exercise_5_2b(){
    string s1;
    cout << "Digite a primeira frase: ";
    cin.ignore();
    getline(cin, s1);
    string s2;
    cout << "Digite a segunda frase: ";
    getline(cin, s2);
    int i = index_of(&s1[0], &s2[0]);
    cout << i << endl;
}

void exercise_6_2b(){
    string s1;
    string s2;
    cout << "Digite o primeiro número: ";
    cin >> s1;
    cin.ignore();
    cout << "Digite o segundo número: ";
    cin >> s2;
    printf("s1 + s2 = ");
    char* soma = sum_of_giant_numbers(&s1[0], &s2[0]);
    printf("%s\n", soma);
    delete[] soma;
}
