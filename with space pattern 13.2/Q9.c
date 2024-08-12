#include<stdio.h>
void main()
{
    for (int  i = 1; i <=5; i++)
    {
        for (int k = i; k < 5; k++)
        {
            printf(" ");
        }
        for (int  j = i; j >=1; j--)
        {
            printf("*");
        }
        printf("\n");
        
        
    }
    
}