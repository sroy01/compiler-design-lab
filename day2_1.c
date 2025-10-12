// String Input and count Vowels, Consonants and Digits
#include<stdio.h>
#include<ctype.h>

int main(){
    char s[1000];
    gets(s);
    int v=0, cn=0, d=0;
    for(int i=0;s[i]!='\0';i++){
        char c = tolower(s[i]);
        if(isdigit(c)){
            d++;
        } else if(c>='a' && c<='z'){
            if(c=='a' || c=='e' || c=='i' || c=='o' || c=='u'){
                v++;
            }else {
                cn++;
            }
        }
    }
        printf("Total Vowels: %d\n", v);
        printf("Total Consonants: %d\n", cn);
        printf("Total Digits: %d", d);
        return 0;
}
