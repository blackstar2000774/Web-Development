#include<stdio.h>
int main()
{
    int num1, num2, sum, product;

    // Input two numbers
    printf("Enter the first number: ");
    scanf("%d", &num1);
    printf("Enter the second number: ");
    scanf("%d", &num2);

    // Calculate sum and product
    sum = num1 + num2;
    product = num1 * num2;

    // Display the results
    printf("Sum: %d\n", sum);
    printf("Product: %d\n", product);

    return 0;
}