#include <stdio.h>
int main() {
    int size;
    scanf("%d", &size);
    int arr[size];
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    int gp=0;
    int g=arr[0];
    for (int i = 1; i <=size; i++) {
        if (g!= arr[i]) {
            gp++;
            g=arr[i];
        }
    }
    printf("%d\n", gp);
}
