#include <stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char s[1000];
    printf("Enter an identifier: ");
    fgets(s, sizeof(s), stdin);
    int id = 1;

    s[strcspn(s, "\n")] = '\0';

    if(!(isalpha(s[0]) || s[0]=='_')){
        id = 0;
    }

    for(int i=1;i<strlen(s);i++){
        if(!(isalnum(s[i]) || s[i]=='_')){
            id = 0;
            break;
        }
    }
    
    if(id){
        printf("Valid Identifier\n");
    } else {
        printf("Invalid Identifier\n");
    }
    return 0;
}