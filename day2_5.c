#include<stdio.h>
#include<string.h>

int main() {
    char s[1000];
    fgets(s, sizeof(s), stdin);

    char *sr = strtok(s, " ");
    while(sr != NULL){
        printf("%s\n", sr);
        sr = strtok(NULL, " ");
    }
    return 0;
}
