#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<20) {
        printf("Cold");
    }
    else if (n>=20 && n<=30) {
        printf("Normal");
    }
    else if (n>30) {
        printf("Hot");
    }
}
