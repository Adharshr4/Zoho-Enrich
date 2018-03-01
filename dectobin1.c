#include<stdio.h>
#include <stdlib.h>

int main()
{
    int number,count=0;
    scanf("%d",&number);
    while(number)
    {
        count=count+(number-2*(number/2));  
        number=number/2;
    }
    printf("%d",count);

}
