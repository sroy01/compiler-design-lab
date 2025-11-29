// RE (a|b)+abb(b)+
#include <stdio.h>
#include<string.h>

int main() {
    char s[1000];
    printf("Enter a string: ");
    fgets(s, sizeof(s), stdin);

    s[strcspn(s, "\n")] = '\0';

    int pos = -1;
    int n = strlen(s);

    for(int i=0; i<=n-3; i++){
        if(s[i]=='a' && s[i+1]=='b' && s[i+2]=='b'){
            int j = i+3;
            int valid = 1;
            
            if(j>=n){
                continue;
            }
            while(j<n){
                if(s[j]!='b'){
                    valid = 0;
                    break;
                }
                j++;
            }

            if(valid){
                pos = i;
                break;
            }
        }
    }

    if(pos==-1){
        printf("Not a match\n");
        return 0;
    }

    if(pos<1){
        printf("Not a match\n");
        return 0;
    }

    for(int i=0;i<pos;i++){
        if(s[i]!='a' && s[i]!='b'){
            printf("Not a match\n");
            return 0;
        }
    }
    int i = pos+3;
    int bCount=0;
    while(i<n && s[i]=='b'){
        bCount++;
        i++;
    }

    if(i==n){
        printf("Match\n");
    } else {
        printf("Not a match\n");
    }

    return 0;
}

