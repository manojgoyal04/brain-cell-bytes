#include <stdio.h>

int main() {
    int lower_limit;
    printf("Please enter the lower limit of prime numbers: " );
    scanf("%d",&lower_limit);
    int upper_limit;
    printf("Please enter the upper limit of prime number: ");
    scanf("%d",&upper_limit);
    int flag = 0;
    int sum = 0;
    for(int j= lower_limit; j< upper_limit;j++){
       for(int i = 2; i< j; i++){
            if (j % i == 0){
                printf("%d is not a prime number\n",j);
                flag = 1;
                break;
            }
            flag = 0;
        }
        if(flag ==0){
            sum += j;
            printf("New prime number is %d and new sum is %d \n", j, sum);
        }


    }  
    printf("Sum of prime numbers between %d and %d is %d \n", lower_limit,upper_limit, sum);
    return 0;    
}
