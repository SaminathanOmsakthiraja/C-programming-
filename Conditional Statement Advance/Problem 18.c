#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    if (n>=499) {
        printf("Free Delivery");
    }
    else {
        printf("Delivery Charges Apply");
    }
}
