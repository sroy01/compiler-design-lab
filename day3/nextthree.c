// Print Next 3 characters
#include<stdio.h>
#include<string.h>

int main() {
    char s[1000];
    scanf("%s",s);

    for(int i=0;i<strlen(s);i++){
        if(s[i]>='a' && s[i]<='z'){
            s[i]=(s[i]+3);
        } else if(s[i]>='A' && s[i]<='Z'){
            s[i]=s[i]+3;
        }
    }
    printf("%s", s);
    return 0;
}
