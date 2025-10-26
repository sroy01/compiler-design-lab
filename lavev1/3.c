#include <stdio.h>
#include <string.h>

int main() {
    char a[1000];
    int count = 1;
    scanf("%[^$]", a);

    for (int i=0;a[i]!='\0';i++) {
        if (a[i]=='\n') {
            count++;
        }
    }
    int ans = count*3;
    printf("Total lines: %d\n", ans);
    return 0;
}
