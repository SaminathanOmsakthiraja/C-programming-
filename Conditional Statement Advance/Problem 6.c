#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n%100==0) {
        printf("Valid Amount");
    }
    else {
        printf("Invalid Amount");
    }
}
