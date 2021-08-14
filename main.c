/*To do basic operations with two numbers which are inputs*/
#include <stdio.h>
int main()
{
    int no1, no2, sum, difference, product;
    float quotient;
    printf("Enter the two numbers to get their sum, difference, product, quotient.\n");
    scanf("%d %d", &no1, &no2);
    sum = no1 + no2;
    difference = no1 - no2;
    product = no1 * no2;
    quotient = no1 / no2;
    printf("1st Number: %d\n", no1);
    printf("2nd Number: %d\n", no2);
    printf("Sum: %d\n", sum);
    printf("Difference: %d\n", difference);
    printf("Product: %d\n", product);
    printf("Quotient: %f\n", quotient);
}