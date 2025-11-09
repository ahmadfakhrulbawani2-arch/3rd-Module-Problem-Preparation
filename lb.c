// the explanation is in the bottom
#include <stdio.h>

int fib(int n) {
    if(n == 0) return 1;
    if(n == 1) return 1;
    return fib(n-1) + fib(n-2);
}

int main(void) {
    int n;
    scanf("%d", &n);
    int f = fib(n); 
    printf("%d", f);
    return 0;
}


/*

Link: https://codeforces.com/problemset/problem/318/A

Repo: https://github.com/ahmadfakhrulbawani2-arch/CodeForces-Dump-22-to-29-Oct-2025

Sometimes I forgot to change the link. Sorry
*/

/*
=== EXPLANATION ===

0,1,1,2,3,5,8, 13, ...
Notice the hint: 
Jumlah kemungkinan susunan karpet hingga meter ke-𝑖 dapat ditentukan jika kita 
sudah mengetahui jumlah kemungkinan susunan karpet hingga meter ke-(𝑖−1) 
dan meter ke-(𝑖−2).  
karena n = 1 ==> 1, n = 2 ==> 2, n = 3 ==> 3

if n = 5

1,1,1,1,1 * 1
2,1,1,1 * 4
2,2,1 * 3
res = 1+3+4 = 8

if n = 6
1,1,1,1,1,1 *1
2,1,1,1,1 * 5
2,2,1,1 * 4
2,2,2 * 3       yea i don't understand why it should be three though
res = 1+3+4+5 = 13

Doesn't understand? Me neither.
A tip if you don't get the number you want, try to shift the n value either +1 or -1

*/