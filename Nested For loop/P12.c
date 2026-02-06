#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++) {
        for (int j=1;j<i;j++) {
            printf("%d ",j);
        }
        for (int s=4;s>=i;s--) {
            printf("  ");
        }
        for (int t=4;t>=i;t--) {
            printf("  ");
        }
        for (int r=4;r>5-i;r--) {
            printf("%d ",5-r);
        }
        printf("\n");
    }
}
