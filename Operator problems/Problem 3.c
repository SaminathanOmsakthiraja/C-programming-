#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    (n<0)?printf("NEGATIVE"):
    (n>0)?printf("POSITIVE"):
    printf("ZERO");
}
