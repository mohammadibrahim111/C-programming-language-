#include<stdio.h>

/* Mohammad Ibrahim
First Year (Computer)
UIN- 251P111 */

int main()
{
    float phy, chem, math, avg;

    printf("Enter marks for Physics: ");
    scanf("%f", &phy);

    printf("Enter marks for Chemistry: ");
    scanf("%f", &chem);

    printf("Enter marks for Mathematics: ");
    scanf("%f", &math);

    avg = (phy + chem + math) / 3;

    printf("\n