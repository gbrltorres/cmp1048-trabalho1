#include <util2b.h>

//questao 1
int str_to_int(char* s, int q){
    int aux = q-1;
    int num = 0;
    for (int i=0; i<q; i++) {
        num += (s[i] - '0') * pow(10, aux);
        aux--;
    }
    return num;
}

int size(char* s){
    int count = 0;
    while(s[count]){
        count++;
    }
    return count;
}

//questao 3
string remove_whitespaces(char* s1){
    string s2 = "";
    int i=0;
    while (s1[i] == ' ') {
        i++;
    }
    int j=size(s1);
    while (s1[i] == ' ') {
        j--;
    }
    for (; i<j; i++) {
        s2 += s1[i];
    }
    return s2;
}

int count_words(string* list){
    int count = 0;
    while (list[count]!="\0") {
        count++;
    }
    return count;
}

//questao 4
string* split(string s, char c){
    string* list = new string[10];
    string aux = "";
    int j = 0;
    for (int i=0; s[i]!='\0'; i++) {
        if (s[i] != c) {
            aux += s[i];
        } else {
            list[j] = aux;
            aux = "";
            j++;
        }
    }
    list[j] = aux; //ultima palavra depois do caracter especial
    return list;
}

//questao 5
int index_of(char* s1, char* s2){
    int s1s = size(s1);
    int s2s = size(s2);
    for (int i=0, j=0; i<s1s; i++) {
        if (s1[i] == s2[j] && s2[j]) {
            j++;
            if (j == s2s) {
                return i-(s2s-1);
            }
        } else {
            i = i - j;
            j = 0;
        }
    }
    return -1;
}

char* complete_array(char* old_arr, int old_size, int difference){
    int new_size = old_size + difference;
    char* new_array = new char[new_size+1];
    int i = 0;
    for (; i<difference; i++) {
        new_array[i] = '0';
    }
    for (int j=0; j<old_size; j++) {
        new_array[i] = old_arr[j];
        i++;
    }
    return new_array;
}

//questao 6
char* sum_of_giant_numbers(char* n1, char* n2){
    int s1 = size(n1);
    int s2 = size(n2);
    int s3 = s1+2;
    if (s1>s2) {
        s3 = s1 + 2;
        n2 = complete_array(n2, s2, s1-s2);
    } else if (s1<s2) {
        s3 = s2 + 2;
        n1 = complete_array(n1, s1, s2-s1);
    }
    char* n3 = new char[s3];
    n3[s3-1] = '\0';
    int carry = 0;
    int sum = 0;
    int i = s3-3; // 1 a menos que o vetor soma
    int j = s3-2;
    for (; i>=0; i--) {
        sum = n1[i]-'0' + n2[i]-'0' + carry;
        carry = sum/10;
        n3[j] = (sum%10)+'0';
        j--;
    }
    n3[j] = carry + '0';
    if (n3[0]=='0') {
        for (int i=0; i<s3; i++) {
            n3[i] = n3[i+1];
        }
    }
    if (s1>s2) {
        delete[] n2;
    } else if (s2>s1) {
        delete[] n1;
    }
    return n3;
}
