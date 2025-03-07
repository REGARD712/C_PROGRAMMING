/*
自然常数 e 可以用级数 1 + 1/1! + 1/2! + 1/3! + ... + 1/n!来近似计算。
*/
#include <stdio.h>

int main() {
    int n;
    while (1 == scanf("%d", &n)) {
        if (n >= 0 && n <= 600) {
            double e = 1.0;
            double factorial = 1.0;
            int i;
            for (i = 1; i <= n; i++) {
                factorial /= i;  // 递推计算1/i!
                e += factorial;
            }
            printf("%.16lf\n", e);
        }
    }
    return 0;
}
