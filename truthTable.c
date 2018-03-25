/*Only for A+(B+C)*/
#include<stdio.h>
#include <stdlib.h>

int main()
{
    printf("A  \t  B  \t  C  \t  Y\n");
    int i,j,k;
    for(i=0;i<=1;i++)
    {
        for(j=0;j<=1;j++)
        {
            for(k=0;k<=1;k++)
            {
                printf("%d  \t  %d  \t  %d  \t  %d",i,j,k,i||j||k);
                printf("\n");
            }
        }
    }

}
