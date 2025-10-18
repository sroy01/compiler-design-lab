#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    scanf("%[^$]", s);

    int cmt=0;
    for(int i=0;s[i]!='\0';i++){
        if(!cmt && s[i]=='/' && s[i+1]=='*'){
            cmt=1;
            printf("/*");
            i++;
            continue;
        }
        if(cmt && s[i]=='*' && s[i+1]=='/'){
            printf("*/\n");
            cmt=0;
            i++;
            continue;
        }
        if(cmt){
            putchar(s[i]);
            continue;
        }
        if(!cmt && s[i]=='/' && s[i+1]=='/'){
            printf("//");
            i+=2;
            while(s[i]!='\n' && s[i]!='\0'){
                putchar(s[i]);
                i++;
            }
            printf("\n");
        }
    }
    return 0;
}
