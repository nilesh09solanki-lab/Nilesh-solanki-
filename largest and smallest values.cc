#include <stdio.h>

int main() {
    int l, i, s, a;

    printf("Enter a random number: ");
    scanf("%d", &a);

    l = a;
    s = a;

    for(i = 1; i <= 9; i++) {
        printf("Enter a random number: ");
        scanf("%d", &a);

        if(a > l) {
            l = a;
        }

        if(a < s) {
            s = a;
        }
    }

    printf("\nLargest = %d\nSmallest = %d\n", l, s);

    return 0;
}
