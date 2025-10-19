#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char s[1000];
    scanf("%s", s);

    int id=1;
    if (!(isalpha(s[0]) || s[0]=='_' || s[0]=='$')) {
        id=0;;
    }
    for (int i=1; i<strlen(s);i++) {
        if (!(isalnum(s[i]) || s[i] == '_' || s[i] == '$')) {
            id=0;
        }
    }
    if (id==1) {
        printf("Valid");
    } else {
        printf("Invalid");
    }

    return 0;
}
