#include<stdio.h>

int main() {
    int x1, y1, x2, y2, x3, y3;
    printf("Enter the coordinates of three points (x1, y1), (x2, y2), and (x3, y3): ");
    scanf("%d %d %d %d %d %d", &x1, &y1, &x2, &y2, &x3, &y3);

    if (((y2 - y1) / (x2 - x1)) == ((y3 - y2) / (x3 - x2))) {
        printf("Points lie on the same line.\n");
    } else {
        printf("Points do not lie on the same line.\n");
    }

    return 0;
}
