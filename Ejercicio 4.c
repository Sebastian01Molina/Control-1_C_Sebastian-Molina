#include <stdio.h>

int main()
{
    for (int i = 1; i <= 10; i++) {
        printf("%d -> ", i);
        for (int j = 100; j <= 150; j += 10) {
            printf("%d ", j);
        }
        printf("\n");
    }

    return 0;
}
