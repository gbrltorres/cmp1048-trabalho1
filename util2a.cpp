#include <util2a.h>

void change_values_ascending_order(int& a, int& b, int& c){//questao 1
    int aux;
    if(a<b && a<c){
        //a é o menor
        if(b>c){
            aux = c;
            c = b;
            b = aux;
        }
    } else {
        if (b<c) {
            //b é o menor
            if (a<c) {
                //b<a<c
                aux = b;
                b = a;
                a = aux;
            } else {
                //b<c<a
                aux = b;
                b = a;
                a = aux;
                //a<c<b
                aux = b;
                b = c;
                c = aux;

            }
        } else {
            //c é o menor
            if (a<b) {
                //c<a<b
                aux = a;
                a = c;
                c = aux;
                //a<c<b
                aux = b;
                b = c;
                c = aux;
            } else {
                //c<b<a
                aux = a;
                a = c;
                c = aux;
            }
        }
    }
}

int quantity_of_chars(char* c){//questao 3
    int cont = 0;
    while (c[cont]) {
        cont++;
    }
    return cont;
}

int compare_strings(char* s1, char* s2, int q1, int q2){//questao 3-4
    int i = 0;
    while (s1[i] && s2[i]) {
        if (s1[i] != s2[i]) {
            return 1;
        }
        i++;
    }
    if (q1 != q2) {
        return -1;
    }
    return 0;
}
