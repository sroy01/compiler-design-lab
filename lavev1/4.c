#include<stdio.h>
#include<string.h>

int main(){
    char s[1000];
    scanf("%[^$]", s);

    int cmt=0;
    for(int i=0;s[i]!='\0';i++){
        if(!cmt && s[i]=='/' && s[i+1]=='*'){
            cmt=1;
            i++;
            continue;
        }
        if(cmt && s[i]=='*' && s[i+1]=='/'){
            cmt=0;
            i++;
            continue;
        }
        if(cmt){
            continue;
        }
        if(!cmt && s[i]=='/' && s[i+1]=='/'){
            i+=2;
            while(s[i]!=' ' && s[i]!='\n' && s[i]!='t'){
                //putchar(s[i]);
                i++;
            }
            printf("\n");
        }
        while(!cmt){
            printf("%s", s[i]);
        }
    }
    return 0;
}
