#include <stdio.h>

int memo[1005];
int flags[1005] = {0};

int tribb(int n) {
    if(n == 0) return 0;
    if(n == 1) return 1;
    if(n == 2) return 2;

    if(flags[n] == 1) return memo[n];
    int val = tribb(n-1) + tribb(n-2) + tribb(n-3);
    memo[n] = val; flags[n] = 1;
    return val;
}

int main(void) {
    int n;
    scanf("%d", &n);

    for(int i = n; i >= 0; i--) {
        int tribonacci = tribb(i);
        tribonacci %= 100;
        printf("%d ", tribonacci);
    }
    return 0;
}