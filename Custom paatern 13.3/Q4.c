#include <stdio.h>
void main(){
    for (int i = 1; i <=5; i++)
    {
        for (int s = 5; s >i; s--)
        {
            printf(" ");
        }
        
        for (int j = 1; j <=i; j++)
        {
            printf("* ");
        }
        printf("\n");
        
    }
     for (int i = 5; i >= 1; i--)
    {
        for (int k = i; k <5; k++)
        {
            printf(" ");
        }
        

        for (int j = i; j >=1; j--)
        {
            printf("* ");
        }
        
        printf("\n");
    }
}