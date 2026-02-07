#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n>3) {
        printf("Account Locked");
    }
    else {
        printf("Login Allowed");
    }
}
