#include <stdio.h>
#include <string.h>
#include <ctype.h>

int memo[1005];
int freq[1005] = {0};

int countWays(int n) {
    if(n == 0) return 1;
    if(n < 0) return 0;
    if(freq[n]) return memo[n];

    int sum = countWays(n - 20) + countWays(n - 50) + countWays(n - 100);
    freq[n] = 1;
    memo[n] = sum;
    return sum;
}

void trimTrailing(char *str) {
    int i = strlen(str) - 1;
    while (i >= 0 && isspace((unsigned char)str[i])) {
        str[i] = '\0';
        i--;
    }
}

int main(void) {
    int t;
    scanf("%d", &t);
    while(t--) {
        char namaMusuh[51], buff[10];
        scanf(" %[^\n]", namaMusuh);
        trimTrailing(namaMusuh);

        int hp;
        scanf("%d", &hp);
        scanf(" %[^\n]", buff); 
        trimTrailing(buff);

        if(hp < 20) {
            printf("KAVA JANGAN TERLALU KERAS MELAWAN %s\n", namaMusuh);
        } else if(hp % 10 != 0) {
            printf("KAVA KAMU LEBIH BAIK LARI %s\n", namaMusuh);
        } else {
            int res = countWays(hp);
            if(res == 0) {
                printf("KAVA JANGAN TERLALU KERAS MELAWAN %s\n", namaMusuh);
            } else {
                printf("%s DAPAT DIKALAHKAN DENGAN %d CARA YANG BERBEDA!\n", namaMusuh, res);
            }
        }
    }
    return 0;
}
