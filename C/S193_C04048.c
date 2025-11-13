#include <stdio.h>
#include <stdbool.h>

int main() {
    int N, M, K;
    int pos[1003];
    scanf("%d", &N);
    scanf("%d", &M);
    scanf("%d", &K);
    for (int i = 0; i < M; i++) scanf("%d", &pos[i]);

    bool light[1001] = {false};
    for (int i = 0; i < M; i++) {
        int left = pos[i] - K, right = pos[i] + K;
        if (left < 1) left = 1;
        if (right > N) right = N;
        for (int j = left; j <= right; j++) light[j] = true;
    }

    int need = 0, i = 1;
    while (i <= N) {
        if (light[i]) i++;
        else {
            need++;
            i = 2 * K + 1;
        }
    }
    printf("%d", need);
    return 0;
}