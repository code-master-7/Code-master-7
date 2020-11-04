#include <stdio.h>

int main()
{
    int num, i, factorial = 1, exit;

start:

    printf("type 0 for close program \nenter 1 to continue factirial calculator \n");
    scanf("%d", &exit);

    if (exit == 0)
    {
        printf("\nThank you for using Factorial calcutor\n\n");
        goto end;
    }

    printf("you want factorial of : ");
    scanf("%d", &num);

    for (i = num; i >= 1; i--)
    {
        factorial = factorial * i;
    }

    printf("factorial of %d = %d\n\n", num, factorial);

    goto start;

end:

    return 0;
}