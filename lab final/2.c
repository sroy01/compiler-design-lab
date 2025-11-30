#include <stdio.h>
#include <string.h>

int main(){
    char s[100];
    gets(s);
    int i=0;
    int n=strlen(s);
    if(s[0]!='a'){
        printf("Not Accepted");
        return 0;
    }
    while(i<n-1&&(s[i]=='b'||s[i]=='c')){
        i++;
    }
   int pr=0, sq=0;
 while(i<n-1){
        i++;
    if(s[i]=='('){
        pr++;
        }
    else if(s[i]==')'){
            pr--;
        }
    else if(s[i]=='['){
            sq++;
        }
    else if(s[i]==']'){
            sq--;
        }
  if(0>pr||0>sq) {
    printf("Not Accepted");
     return 0;
    }
    }
    if(s[n-1]=='a'&& pr==0 && sq==0)printf("Accepted");
    else printf("Not Accepted");
    return 0;
}
