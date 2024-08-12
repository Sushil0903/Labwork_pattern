#include<stdio.h>
void main(){
    for (int i = 'A'; i <= 'E'; i++)
    {
        for (int j = i; j >='A'; j--)
        {
            printf(" %c",j);
        }
        printf("\n");
        
    }
    
}