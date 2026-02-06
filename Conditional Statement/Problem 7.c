#include <stdio.h>
int main() {
    char n;
    scanf("%c",&n);
    if ((n>='A' && n<='Z')||(n>='a' && n<='z')){
        printf("Alphabet");
    }
    else if (n>='0' && n<='9') {
        printf("Digit");
    }
    else {
        printf("Special Character");
    }
}
