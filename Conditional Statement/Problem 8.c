#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if ((n%7==0) && (n%3==0)) {
        printf("Multiple of both 3 and 7");
    }
    else if (n%7==0) {
        printf("Multiple of 7");
    }
    else if (n%3==0){
        printf("Multiple of 3");
    }
}
