#include <stdio.h>

int min(int arr[], int p, int q) {
    int min = 1000000000;
    for(int i = p-1; i <= q-1; i++) {
        if(min > arr[i]) {
            min = arr[i];
        }
    }
    return min;
}

int main(void) {
    int n, t;
    scanf("%d %d", &n, &t);
    int arr[n];
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    while(t--) {
        int p, q;
        scanf("%d %d", &p, &q);
        int res = min(arr, p, q);
        printf("%d\n", res);
    }
    return 0;
}