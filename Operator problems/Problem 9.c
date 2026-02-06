#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int b=n&(n-1);
    if (b==0) {
        printf("YES");
    }
    else {
        printf("NO");
    }
}
