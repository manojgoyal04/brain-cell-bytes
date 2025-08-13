#include <stdio.h>

int main() {
    int number;
    printf("Please enter the number which is to be checked whether it is a prime number or not :");
    scanf("%d",&number);
    int flag = 0;
    for(int i = 2; i< number; i++){
            if (number % i == 0){
                printf("%d is not a prime number\n",number);
                flag = 1;
                break;
            }
        }
        if (flag == 0)
        {
             printf("%d is a prime number\n", number);
        }      
    
    return 0;    
}
