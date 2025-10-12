//using function 
#include<stdio.h>
#include<string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    char *token = strtok(s, " ");
    while(token != NULL){
        printf("%s\n", token);
        token = strtok(NULL, " ");
    }
    return 0;
}
