#include <stdio.h>
#include <conio.h>
int main()
{
    int i, j, r;
    printf("Enter number of rows: ");
    scanf("%d", &r);

    for(i=1; i<r; i++)
    {
        for(j=1; j<=((2*i)-2); j++)
        {
            printf(" ");
        }
        for(j=i; j<=r; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    for(i=1; i<=r; i++)
    {
        for(j=1; j<=((2*r)-(2*i)); j++)
        {
            printf(" ");
        }
        for(j=1; j<=i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
