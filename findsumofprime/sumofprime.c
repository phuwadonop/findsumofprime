#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<math.h>
#define N 4000000
int main() {

    long int max, n, multiply;

    static long int a[N];

    scanf("%lld", &max);

    for (long int i = 0;i < max; i++) {
        a[i] = i + 1;
    }
    for (long int k = 1;k < sqrt(max);k++) {
        if (a[k] != 0) {
            n = a[k];
            multiply = n;
            for (unsigned long int j = 2; multiply < max; j++) {
                multiply = n * j;
                a[multiply - 1] = 0;
            }

        }
    }
    long long int  sum = 0;
    for (unsigned long long int m = 1;m < max - 1;m++) {
        if (a[m] != 0) { sum += a[m]; }
    }
    printf("%lld", sum);
}


