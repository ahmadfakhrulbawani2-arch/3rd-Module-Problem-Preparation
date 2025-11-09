#include <stdio.h>

int fibb(int n) {
    if(n == 0) return 0;
    else if(n == 1) return 1;
    return fibb(n-1) + fibb(n-2);
}

int main(void) {
    int n;
    scanf("%d", &n);

    int f = fibb(n);
    long long num;

    if(f % 2 == 0) num = (long long) f * 321;
    else num = (long long) f * 123;

    printf("%lld\n", num);
    if(num % 5 == 0) printf("AKU TERJEBAK DALAM DUNIAKU\n");
    else printf("TERIMAKASIH LUPUT TELAH MENJADI PASANGANKU\n");
    return 0;
}