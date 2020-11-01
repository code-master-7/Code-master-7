#include <stdio.h>

int main(void)
{
    float gp , w , l , s1 , s2 , s3 ;
    int user ; 

    Start:

    printf("\n\n");

    printf("Enter 0 for exit \nEnter 1 to continue\n");
    scanf("%d" , &user );


    if (user == 0)
    {
        printf("Thanks for using gold calucator\n");
        printf("\n\n");
        goto end;
    }

    printf("Enter value Of Gold\n");
    scanf("%f" , &gp );

    printf("Enter waite of Jewellery\n");
    scanf("%f" , &w);

    printf("Enter Labor price\n");
    scanf("%f" , &l);

    s1 = gp * w ;
    s2 = l * w ;
    s3 = s1 + s2 ;

    printf("\n\n");

    printf("Gold price = %.4f \nWait = %.4f \nlabor = %.4f \nYour price shoud be = %.4f \n" , gp , w , l , s3);

    goto Start ;

    end:

    return 0;

}