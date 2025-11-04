#include <stdio.h>

int main() {
    int height, width;
    scanf("%d %d", &height, &width);
    for (int i = 0; i < height; i++) {
        for (int j = 0; j < i; j++) printf("~");
        for (int j = 0; j < width; j++) {
            if (i == 0 || i == height - 1 || j == width - 1 || j == 0) printf("*");
            else printf(".");
        }
        printf("\n");
    }
    return 0;
}