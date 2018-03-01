#include<stdio.h>
#include <stdlib.h>

int main()
{
    long int num,i=0,j,nooftimes,arr[100],pos,temp;
    scanf("%ld\n%ld",&num,&nooftimes);
    temp=num;
    while(temp>0)
    {
        arr[i++]=temp%10;
        temp=temp/10;
    }
    pos=nooftimes%i;
    for(j=pos-1;j>=0;j--)
    {
        printf("%ld",arr[j]);
    }
     for(j=pos;j<i;j++)
    {
        printf("%ld",arr[j]);
    }
}
