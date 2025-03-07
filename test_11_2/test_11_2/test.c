#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main()
{
    int n;

    scanf("%d", &n);
    for (int i = 1; i <= n; i++) {
        if (i == n / 2 + 1) {
            for (int k = 1; k <= n; k++) {
                printf("*");
                if (k == n) {
                    printf("\n");
                    break;
                }
                printf(" ");
            }
        }
        else {
            if (i == 1 || i == n) {
                int j;
                for (j = 1; j < n; j++) {
                    printf(" ");
                }
                if (j == n) {
                    printf("*\n");
                }
            }
            else {
                int l = ;
            }
        }

	return 0;
}