#include<stdio.h>
#include<string.h>

int main(void){
    char a[1000];
    scanf("%s", a);

    if(strcmp(a, "return") == 0){
        printf("Matches keyword \"return\"\n");
    }
    else if(strcmp(a, "define") == 0){
        printf("Matches keyword \"define\"\n");
    }
    else {
        int i=0;
        while(a[i]=='a'){
            i++;
        }
        if(a[i]!='b'){
            printf("Pattern doesn't match\n");
            return 0;
        }
        while(a[i]=='b'){
            i++;
        }
        if(a[i]== '\0'){
            printf("Matches pattern a*b+\n");
        } else {
            printf("Doesn't match any pattern\n");
        }
    }
    return 0;
}