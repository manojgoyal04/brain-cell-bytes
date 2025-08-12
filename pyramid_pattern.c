#include <stdio.h>
int main (){
    int limit;
    printf("Please enter the number of lines in the pyramid ");
    scanf("%d",& limit);
    for(int i=1; i<= limit; i++){
        for (int j = limit; j>i; j--){
            printf(" ");
        }
       for(int k = 1; k<=i; k++){
            printf("* ");
       }
       printf("\n");
    }
}