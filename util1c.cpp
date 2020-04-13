#include <util1c.h>

bool is_palindromum(string s){//questao 3
    int i=0, j=s.length()-1;
    while(i<j){
        if (s[i]!=s[j]) {
            return false;
        }
        i++;
        j--;
    }
    return true;
}

void to_lower_case(string &rs){//questao 5
    for (int i=0; i<rs.length(); i++) {
        if (rs[i]>='A' && rs[i]<='Z') {
            rs[i] += ('a' - 'A');
        }
    }
}

void to_upper_case(string &rs){//questao 6
    for (int i=0; i<rs.length(); i++) {
        if (rs[i]>='a' && rs[i]<='z') {
            rs[i] -= ('a' - 'A');
        }
    }
}

void box_with_centralized_text(string s, int n, char c){//questao 7
    int l =  3;
    char caixa[l][n];

    for (int i=0; i<l; i++) {
        for (int j=0; j<n; j++) {
            if (j!=0 && j!=n-1 && i!=0 && i!=l-1) {
                caixa[i][j] = ' ';
            } else {
                caixa[i][j] = c;
            }
        }
    }

    int free_space = n-2;
    int initial_pos;
    if (free_space > s.length()) {
        initial_pos = (n - (int)s.length()) / 2;
        for (int i=0; i<s.length(); i++) {
            caixa[1][initial_pos] = s[i];
            initial_pos++;
        }
    } else {
        initial_pos = 1;
        for (int i=0; i<free_space; i++) {
            caixa[1][initial_pos] = s[i];
            initial_pos++;
        }
    }

    for (int i=0; i<l; i++) {
        for (int j=0; j<n; j++) {
            printf("%c", caixa[i][j]);
        }
        printf("\n");
    }
}
