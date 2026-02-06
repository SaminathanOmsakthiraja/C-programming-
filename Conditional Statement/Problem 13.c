#include <stdio.h>
int main() {
    char n;
    scanf("%c",&n);
    if (n>='A'&&n<='Z') {
        printf("Uppercase letter");
    }
    else if (n>='a'&&n<='z') {
        printf("Lowercase letter");
    }
}
