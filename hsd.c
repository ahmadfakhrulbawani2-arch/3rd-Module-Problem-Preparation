// the explanation is in the bottom
#include <stdio.h>

#define MAX 10000

int multiply(int res[], int res_size, int x) {
    int carry = 0;
    for (int i = 0; i < res_size; i++) {
        long long prod = 1LL * res[i] * x + carry;
        res[i] = prod % 10;
        carry = prod / 10;
    }

    while (carry > 0) {
        res[res_size] = carry % 10;
        carry /= 10;
        res_size++;
    }
    return res_size;
}


void hsd_bigint(int n, int v) {
    int res[MAX];
    res[0] = 1;
    int res_size = 1;

    for (int i = n; i > 0; i -= v) {
        res_size = multiply(res, res_size, i);
    }

    // Print hasilnya (dibalik karena digit terendah di depan)
    for (int i = res_size - 1; i >= 0; i--)
        printf("%d", res[i]);
    printf("\n");
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        int n, v;
        scanf("%d %d", &n, &v);
        hsd_bigint(n, v);
    }
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