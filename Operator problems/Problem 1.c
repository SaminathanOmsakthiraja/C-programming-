#include <stdio.h>
int main() {
    int n,m;
    scanf("%d %d",&n,&m);
    n+=m;
    m=n-m;
    n=n-m;
    printf("%d %d",n,m);
}

