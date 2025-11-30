#include <stdio.h>

/* Mohammad Ibrahim First Year - D
   Computer
   Uin- 251P111 */

int main() {
    int num;
    printf("Enter a Number:");
    scanf("%d",&num);

    if(num % 2 == 0){
        printf("Even Number");
    }
    else{
        printf("Odd Number");
    }

    return 0;
}