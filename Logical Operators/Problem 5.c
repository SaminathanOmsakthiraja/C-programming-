#include <stdio.h>
int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    printf("%d",(n>0 && m>0)||(n==0 || m==0));
    return 0;
}
