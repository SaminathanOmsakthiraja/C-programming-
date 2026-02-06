#include <stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    switch (n) {
        case 1:
            printf("January has 31days");break;
        case 2:
            printf("February has 28 or 29days");break;
        case 3:
            printf("March has 31days");break;
        case 4:
            printf("April has 30days");break;
        case 5:
            printf("May has 31days");break;
        case 6:
            printf("June has 30days");break;
        case 7:
            printf("July has 31days");break;
        case 8:
            printf("August has 31days");break;
        case 9:
            printf("September has 30days");break;
        case 10:
            printf("October has 31days");break;
        case 11:
            printf("November has 30days");break;
        case 12:
            printf("December has 31days");break;
    }
}
