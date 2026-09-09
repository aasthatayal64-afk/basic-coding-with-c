//Q61: Search for an element in an array using linear search.
#include <stdio.h>

int main() {
    int n, key, i;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &key);

    for(i = 0; i < n; i++) {
        if(arr[i] == key) {
            printf("Found at index %d", i);
            return 0;
        }
    }

    printf("-1");

    return 0;
}
