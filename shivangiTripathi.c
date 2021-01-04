#include <stdio.h>
int main()
{
    int a, i, sum = 0, t;
    double j = 1;
    printf("Enter the number = ");
    scanf("%d", &a);
    if (a % 2 == 0)
    {
        printf("The given number is even.\n");
    }
    else
    {
        printf("The given number is odd.\n");
    }
    printf("The factors of given number are = ");
    for (i = 1; i <= a; i++)
    {
        if (a % i == 0)
        {
            printf("%d,", i);
        }
    }
    for (i = 1; i <= a; i++)
    {
        j = j * i;
    }
    printf("\nThe factorial of given number is = %lf\n", j);
    for (i = 2; i < a; i++)
    {
        if (a % i == 0)
        {
            printf("The given number is not prime.");
            goto last;
        }
    }
    printf("The given number is prime.");
last:
    for (i = a; a != 0; a = a / 10)
    {
        t = a % 10;
        sum = sum * 10 + t;
    }
    if (i == sum)
        printf("\nThe given number is palindrome.\n");
    else
    {
        printf("\nThe given number is not palindrome.\n");
    }

    return 0;
}