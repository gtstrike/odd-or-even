//n/2-(n-1)/2
//3/2-(3-1)/2
#include <stdio.h>

int main() {
    int num;
    int operator1 = 1;
    int operator2 = 2;

    printf("Enter an integer: ");
    scanf("%d", &num);

    int product1 = num / operator2;
    int product2 = num - operator1;
    int product3 = product2 / operator2;
    int product4 = product1 - product3;
    // Your code goes here

    printf("hello, %d\n", product4);

    if(num == 0)
    {
        printf("number is even/n");
    }

    else if(product4 == 0)
    {
        printf("number is odd/n");
    }
    
    else
    {
        printf("number is even/n");
    }
    return 0;
}