#include<stdio.h>
void main(){
    for (int i = 1; i <=5; i++)
    {
        for (int k = 1; k <=i; k++)
        {
            printf(" ");
        }

        for (int j = i; j <=5; j++)
        {
            printf("%d",j%2);
        }

        printf("\n");
        
        
    }
    
}