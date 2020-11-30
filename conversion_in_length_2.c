#include <stdio.h>

int main()
{
    
    //Variable declaration
    int user, unit1 , user1;
    float result1;
    
    printf("\n\n");
    //Input from user
    printf("What type of conversion you want?\n");
    printf("Type 1 for kms to miles or miles to kms\nType 2 for inches to foot or foot to inches\nType 3 for cms to inches or inches to cms\nType 4 for pound to kgs or kgs to pound\nType 5 for inches to meters or meters to inches\nEnter 6 to exit the loop\n");
    
Lable:

    scanf("%d", &user);


    //conditions for exit the loop

    if (user == 6)
    {
        printf("\nThank you for using length converter...\n");
        printf("\n~~~ Created by Code - Master - 7 ~~~\n\n");        
        goto end;
    }
    
    // real condition ...
    switch (user)
    {
        //kms to miles or miles to kms
    case 1:
        printf("You selected 1 for kms to miles or miles to kms.(Type 1 for kms to miles or 2 for miles to kms)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("\nEnter you length:");
            scanf("%f", &result1);
            printf("\n%f kms = %f miles\n", result1, result1 / 1.609);
        }
        else if (unit1 == 2)
        {
            printf("\nEnter you length:");
            scanf("%f", &result1);
            printf("\n%f miles = %f kms\n", result1, result1 * 1.609);
        }
        goto Lable ;

    //inches to foot or foot to inches
    case 2:
        printf("You selected 2 for inches to foot or foot to inches.(Type 1 for inches to foot or 2 for foot to inches)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("\nEnter you length:");
            scanf("%f", &result1);
            printf("\n%f inches = %f foot\n", result1, result1 / 12);
        }
        else if (unit1 == 2)
        {
            printf("\nEnter you length:");
            scanf("%f", &result1);
            printf("\n%f foot = %f inches\n", result1, result1 * 12);
        }
        goto Lable ;

    //cms to inches or inches to cms
    case 3:
        printf("You selected 3 for cms to inches or inches to cms.(Type 1 for cms to inches or 2 for inches to cms)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("\nEnter you length:");
            scanf("%f", &result1);
            printf("\n%f cms = %f inches\n", result1, result1 / 2.54);
        }
        else if (unit1 == 2)
        {
            printf("\nEnter you length:");
            scanf("%f", &result1);
            printf("\n%f inches = %f cms\n", result1, result1 * 2.54);
        }
        goto Lable ;

        //pound to kgs or kgs to pound
    case 4:
        printf("You selected 4 for pound to kgs or kgs to pound.(Type 1 for pound to kgs or 2 for kgs to pound)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("\nEnter you mass value:");
            scanf("%f", &result1);
            printf("\n%f pound = %f kgs\n", result1, result1 / 2.205);
        }
        else if (unit1 == 2)
        {
            printf("\nEnter you mass value:");
            scanf("%f", &result1);
            printf("\n%f kgs = %f pound\n", result1, result1 * 2.205);
        }
        goto Lable ;

        //inches to meters or meters to inches
    case 5:
        printf("You selected 5 for inches to meters or meters to inches.(Type 1 for inches to meters or 2 for meters to inches)\n");
        scanf("%d", &unit1);
        if (unit1 == 1)
        {
            printf("\nEnter you length:");
            scanf("%f", &result1);
            printf("\n%f inches = %f meters\n", result1, result1 / 39.37);
        }
        else if (unit1 == 2)
        {
            printf("\nEnter you mass value:");
            scanf("%f", &result1);
            printf("\n%f meters = %f inches\n", result1, result1 * 39.37);
        }
        goto Lable ;

    default:
        printf("\nYou typed an invalied no.\n");
        break;
    }

    end :

        printf("\nThank you for using converter ...\n");
        printf("\n~~~ Created by Code - Master - 7 ~~~\n\n");

    return 0;
}