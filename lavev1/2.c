#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    char b[1000];
    int j=0;
    gets(a);

    for(int i=strlen(a)-1;i>=0;i--){
        if(a[i]!='_'){
            printf("%c", a[i]);
        }
    }
    return 0;
}
