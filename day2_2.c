// Article (a, an , the) check
#include<stdio.h>
#include<ctype.h>
int is_word_end(char c) {
    return c == ' ' || c == '\n' || c == '\0';
    }
int main(){
    char s[1000];
    fgets(s, sizeof(s), stdin);
    int a=0, an=0, the=0;
    for(int i = 0; s[i] != '\0'; i++) {
    if (s[i] == 'a' && (i == 0 || is_word_end(s[i-1])) && is_word_end(s[i+1])) {
        a++;
    }
    else if (s[i] == 'a' && s[i+1] == 'n' && (i == 0 || is_word_end(s[i-1])) && is_word_end(s[i+2])) {
        an++;
    }
    else if (s[i] == 't' && s[i+1] == 'h' && s[i+2] == 'e' && (i == 0 || is_word_end(s[i-1])) && is_word_end(s[i+3])) {
        the++;
    }
}
    printf("Total A's: %d\n", a);
    printf("Total An's: %d\n", an);
    printf("Total The's: %d", the);
    return 0;
}
