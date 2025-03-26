#include <stdio.h>

void printInBinary(int num)
{
    if(num != 0)
    {
//        printf("%d", num%2);        // This line will print the binary number in reverse order.
        printInBinary(num/2);
        printf("%d", num%2);        // This line will print the binary number in correct order.
    }
}

int main()
{
    int intNum;

    printf("Enter a number: ");
    scanf("%d", &intNum);

    printInBinary(intNum);

    return 0;
}
