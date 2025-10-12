// count total lines 
#include<stdio.h>
#include<ctype.h>

int main(){
    char s[1000];
    scanf("%[^$]", s);
    int count=1;
    for(int i = 0; s[i] != '\0'; i++) {
        if(s[i]=='\n') count++;
}
    printf("Total Lines: %d\n", count);
    return 0;
}
