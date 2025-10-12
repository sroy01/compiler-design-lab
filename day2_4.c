#include <stdio.h>
#include <ctype.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    for (int i = 0; s[i] != '\0'; i++) {
        if (s[i] == ' ') {
            printf("\n"); 
        } else {
            printf("%c", s[i]);
        }
    }
    return 0;
}
