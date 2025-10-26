#include<stdio.h>
#include<string.h>

int main(){
    char a[1000];
    gets(a);

    int count = strlen(a);
    printf("String Length is: %d\n", count);
    return 0;

}
