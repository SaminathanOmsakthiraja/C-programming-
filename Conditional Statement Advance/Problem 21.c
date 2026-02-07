#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n==1) {
        printf("Admin");
    }
    else if (n==2) {
        printf("User");
    }
    else if (n==3) {
        printf("Guest");
    }
}
