#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf("%[^$]", s);

    for (int i=0; i<strlen(s);i++) {
        if (s[i]== '\n'||s[i]=='\t') {
            continue;
        }
        if (isalnum(s[i]) || s[i]==' ') {
            putchar(s[i]);
        }
    }
    return 0;
}
