#include <stdio.h>

int main(void)
{
    float gp , w , l , s1 , s2 , s3;

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

}

/*#include <stdio.h>

int main()
{
    float Gold_price, Wait, Sum1, Sum2, Sum3, Labor;

    printf("Enter an gold price\n");
    scanf("%f\n", &Gold_price);

    printf("Enter the wait of Jewellery \n");
    scanf("%f\n", &Wait);

    printf("Enter labor cost on jewellery\n");
    scanf("%f\n", &Labor);

    Sum1 = Gold_price * Wait; // Sum 1 = Gold_price * Wait
    Sum2 = Labor * Wait;      // Sum 2 = Labor * Wait
    Sum3 = Sum1 + Sum2;       // Sum3 = Sum1 + Sum2

    printf("In Gold price = %.4f \nwith Wait = %.4f \nAnd Labor = %.4f \nPrice = %.4f", Gold_price, Wait, Labor, Sum3);

    return 0;
}
*/