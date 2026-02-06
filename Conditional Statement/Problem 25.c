#include <stdio.h>
int main() {
    int n;
    int m,p;
    scanf("%d",&n);
    scanf("%d %d",&m,&p);
    switch (n) {
        case 1:
            printf("Sum = %d",m+p);break;
        case 2:
            printf("Difference = %d",m-p);break;
        case 3:
            printf("Product = %d",m*p);break;
        case 4:
            printf("Divide = %d",m/p);break;
        case 5:
            printf("Reminder = %d",m%p);break;
    }
}
