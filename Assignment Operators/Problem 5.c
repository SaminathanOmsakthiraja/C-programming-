#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    int d=n;
    n/=m;
    d%=m;
    printf("%d %d",n,d);
    return 0;
}
