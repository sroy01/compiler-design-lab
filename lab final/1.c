#include <stdio.h>
#include <string.h>

int main() {
    char s[100];
    gets(s);
    int n=strlen(s);
    int i=0;
    while(s[i]=='b'){
            i++;
    }
    if(s[i]=='a'&& i==n-1){
        printf("Accepted");
        return 0;
    }
    if(s[0]=='a'){
    for(i=1;i<n;i++) {
        if (s[i]!='b'){
        printf("Not Accepted");
        return 0;
            }
    }
    printf("Accepted");
    return 0;
    }
    printf("Not Accepted");
    return 0;
}
