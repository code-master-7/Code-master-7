#include <stdio.h>

int main(void)
{
    int user, time, i = 0, power;

start:

    printf("\nEnter your number :");
    scanf("%d", &user);

    printf("\nEnter power = 1 to exit\nEnter Power :");
    scanf("%d", &time);

    if (time == 1)
    {
        printf("\n1 times of %d is = %d\n", user, user);
        goto end;
    }

    power = user;

    do
    {
        power = power * user;

        i++;

    } while (i > time);

    printf("\n%d times of %d is = %d\n", time, user, power);

    goto start;

end:

    printf("\nThank you for using converter ...\n");
    printf("\n~~~ Created by Code - Master - 7 ~~~\n\n");
}