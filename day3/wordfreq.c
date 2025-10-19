#include<stdio.h>
#include<string.h>
#include<ctype.h>

int main() {
    char s[1000];
    char w[100];
    int count=0;
    gets(s);
    gets(w);

    char *token = strtok(s, " ");
    while(token != NULL){
            if(strcmp(token,w)==0){
                count++;
            }
        token = strtok(NULL, " ");
    }
    printf("The word \"%s\" appears %d times\n", w, count);
    return 0;
}
