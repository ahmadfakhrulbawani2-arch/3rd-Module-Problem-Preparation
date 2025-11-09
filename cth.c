#include <stdio.h>
#include <string.h>

int N, M;
int grid[105][105];
int visited[105][105];

// 8 arah gerak (atas, kanan atas, kanan, kanan bawah, bawah, kiri bawah, kiri, kiri atas)
int dx[] = {-1, -1, -1, 0, 1, 1, 1, 0};
int dy[] = {-1, 0, 1, 1, 1, 0, -1, -1};

int dfs(int x, int y) {
    if(x < 0 || x >= N || y < 0 || y >= M) {
        return 0;
    }
    if(grid[x][y] != 0 || visited[x][y]) {
        return 0;
    }

    visited[x][y] = 1;
    int luas = 1; // tiap 0 yang dikunjungi nambah 1 luas

    for(int i = 0; i < 8; i++) {
        luas += dfs(x + dx[i], y + dy[i]);
    }

    return luas;
}

int main(void) {
    scanf("%d %d", &N, &M);
    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            scanf("%d", &grid[i][j]);
        }
    }

    memset(visited, 0, sizeof(visited));
    int totalGenangan = 0, maxLuas = 0;
    int count[10005] = {0}; // untuk menyimpan jumlah genangan tiap ukuran

    for(int i = 0; i < N; i++) {
        for(int j = 0; j < M; j++) {
            if(grid[i][j] == 0 && !visited[i][j]) {
                int luas = dfs(i, j);
                totalGenangan++;
                if (luas > maxLuas) {
                    maxLuas = luas;
                }
                count[luas]++;
            }
        }
    }

    printf("Banyak genangan: %d\n", totalGenangan);
    printf("Luas terbesar: %d\n", maxLuas);
    printf("List lubang:\n");

    for(int i = maxLuas; i >= 1; i--) {
        if(count[i] > 0) {
            printf("#%d = %d\n", i, count[i]);
        }
    }

    return 0;
}
