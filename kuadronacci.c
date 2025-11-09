#include <stdio.h>

void calc(int res[], int len, int init) {
    if(init >= len) return;
    res[init] = res[init - 1] + res[init - 2] + res[init - 3] + res[init - 4];
    calc(res, len, init+1);
}

void cetak(int res[], int len, int row, int column) {
    int init = 0;
    for(int i = 0; i < row; i++) {
        for(int j = 0; j < column; j++) {
            printf("%d ", res[init++]);
        }
        printf("\n");
    }
}

int main(void) {
    int row, column, a, b, c, d;
    scanf("%d %d %d %d %d %d", &row, &column, &a, &b, &c, &d);
    int len = row * column, res[len], init = 4;
    res[0] = a; res[1] = b; res[2] = c; res[3] = d;
    calc(res, len, init);
    cetak(res, len, row, column);
    return 0;
}