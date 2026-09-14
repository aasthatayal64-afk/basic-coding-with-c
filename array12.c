//Q67: Insert an element in an array at a given position.
#include <stdio.h>

int main() {
    int n, i, pos, value;

    scanf("%d", &n);

    int a[n + 1];

    for (i = 0; i < n; i++) {
        scanf("%d", &a[i]);
    }

    scanf("%d %d", &pos, &value);

    // Shift elements one position to the right
    for (i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }

    // Insert new element
    a[pos] = value;

    n++;

    for (i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }

    return 0;
}