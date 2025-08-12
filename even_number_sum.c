#include <stdio.h>

int main() {
    int sum = 0;
    for (int i = 1; i <= 10; i++) {
        sum += 2 * i;  // 2*i gives the i-th even number
    }
    printf("Sum of first 10 even numbers is: %d\n", sum);
    return 0;
}
