#include <stdio.h>
int main() {
    for (int i=1;i<=5;i++) {
        for (int j=5;j>=i;j--) {
            printf("* ");
        }
        for (int s=1;s<i;s++) {
            printf("  ");
        }
        for (int t=1;t<i;t++) {
            printf("  ");
        }
        for (int r=5;r>=i;r--) {
            printf("* ");
        }
        printf("\n");
    }
    for (int i=1;i<=5;i++) {
        for (int m=1;m<=i;m++) {
            printf("* ");
        }
        for (int o=5;o>i;o--) {
            printf("  ");
        }
        for (int n=5;n>i;n--) {
            printf("  ");
        }for (int p=1;p<=i;p++) {
            printf("* ");
        }
        printf("\n");
    }
}
