#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 20; i++) {
        if (i % 2 == 1){
            sum += i;  // 2*i gives the i-th even number
            printf("number %d --- sum %d\n", i, sum);
        }
    }
    printf("Sum of first 10 odd numbers is: %d\n", sum);
    return 0;
}