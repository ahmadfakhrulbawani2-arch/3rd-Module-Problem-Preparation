// the explanation is in the bottom
#include <stdio.h>

int collatz(int n, int steps) {
    if(n == 1) {
        return steps;
    }
    if(n % 2 == 1) {
        n = 3*n + 1;
    } else {
        n /= 2;
    }
    collatz(n, steps+1);
}

int main(void) {
    int n;
    scanf("%d", &n);
    int steps = 0;
    steps = collatz(n, steps);
    printf("%d\n", steps);
    return 0;
}



/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

.

*/