/*
Write a program to print the pattern:

input :5

output:

 *********
  *******
   *****
    ***
     *

*/
#include <stdio.h>

int main()
{
    int n;
    printf("Enter a number: "); scanf("%d",&n);

    for(int i = n; i >=1; i--)
    {
        for(int j = n; j >= i; j--)
        {
            printf(" ");
        }
        for(int j = 1; j <= 2*i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}