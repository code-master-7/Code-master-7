#include <stdio.h>

int main()
{
    float gp, l, w, t, s1, s2, s3, exit;

start:

    printf("\n");

    printf("Enter 1 to exit the loop\nand 0 to continu in calculator\n");
    scanf("%f", &exit);

    if (exit == 1)
    {
        printf("\nthank you for using calculator\n\n");
        goto end;
    }

    printf("\nEnter price of gold\n");
    scanf("%f", &gp);

    printf("Enter wait of jewellery\n");
    scanf("%f", &w);

    printf("Enter total value told by saller\n");
    scanf("%f", &t);

    s1 = gp * w;
    s2 = t - s1;
    s3 = s2 / w;
    l = s3;

    printf("\nIf Gold price :=:  %.4f \nwait :=:  %.4f \nprice said by seller :==:  %.4f \nThan Labor :==:  %.4f\n", gp, w, t, l);

    goto start;

end:

    return 0;
}