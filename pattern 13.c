//pattern 13
//* * * *
// * * *
//  * *
//   *

#include<stdio.h>
int main()
{
    int n,row,col;
    printf("Enter n: ");
    scanf("%d",&n);
    for(row=n;row<=n;row--)
    {
        for(col=1;col<=n-row;col++)
        {
            printf(" ");
        }
        for(col=1;col<=2*row-1;col++)
        {
            printf("*");
        }
        printf("\n");
    }
}
