#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define N 2000000
int main() {
    long int max, n, multiply;
    static long int a[N];
    scanf("%lld", &max);
    for (long int i = 0;i < max; i++) {
        a[i] = i + 1;
    }
    long long int  sum = 0;
    for (long int k = 1;k < max;k++) {
        if (a[k] != 0) {
            n = a[k];
            multiply = n;
            sum += a[k];
            for (unsigned long int j = 2; multiply < max; j++) {
                multiply = n * j;
                a[multiply - 1] = 0;
            }

        }
    }
    printf("%lld", sum);
}