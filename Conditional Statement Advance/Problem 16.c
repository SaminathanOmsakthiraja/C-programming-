#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n>90) {
        printf("Overflow Warning");
    }
    else {
        printf("Safe Level");
    }
}
