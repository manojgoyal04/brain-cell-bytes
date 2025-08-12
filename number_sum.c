#include <stdio.h>

int main() {
    int sum = 0;
    int count;
    int choice;
    printf("Please enter the count of numbers to be added:");
    scanf("%d",&count);
    printf("Please enter the choice (for odd =1 and even =0):");
    scanf("%d",&choice);
    if(choice == 1 ){
        for (int i = 1; i <= 2*count; i++) {
        if (i % 2 == 1){
            sum += i;  // 2*i gives the i-th even number
            //printf("number %d --- sum %d\n", i, sum);
        }
    }
    printf("Sum of first %d odd numbers is: %d\n",count, sum);
    return 0;
    }
    else{
        for (int i = 1; i <= count; i++) {
        sum += 2 * i;  // 2*i gives the i-th even number
    }
    printf("Sum of first %d even numbers is: %d\n", count, sum);
    return 0;
    }

}