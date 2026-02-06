#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++) {
        for (int j=1;j<=i;j++) {
            printf("*");
        }
        for (int s=4;s>=i;s--) {
            printf(" ");
        }
        for (int t=4;t>=i;t--) {
            printf(" ");
        }
        for (int r=4;r>=5-i;r--) {
            printf("*");
        }
        printf("\n");
    }
    for (int i=1;i<=5;i++) {
        for (int s=4;s>=i;s--) {
            printf("*");
        }
        for (int j=1;j<=i;j++) {
            printf(" ");
        }
        for (int r=4;r>=5-i;r--) {
            printf(" ");
        }
        for (int t=4;t>=i;t--) {
            printf("*");
        }
        printf("\n");
    }
}
