#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n<=100&&n>=90) {
        printf("Grade A");
    }
    else if (n<90&&n>=75) {
        printf("Grade B");
    }
    else if (n<75&&n>=50) {
        printf("Grade C");
    }
    else if (n<50&&n>=25) {
        printf("Grade D");
    }
}
