#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    if (n>=85 && m<300000) {
        printf("Eligible");
    }
    else {
        printf("Not Eligible");
    }
}
